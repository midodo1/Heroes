#ifndef AI__H
#define AI__H


namespace AI {

  /// class AI - 
  class AI {
    // Attributes
  protected:
    const State& mainState;
    // Operations
  public:
    AI (const State& mainState);
    virtual ~AI ();
    virtual void run (CommandSet& commands) = 0;
  };

  /// class DumbAI - 
  class DumbAI : public AI::AI {
    // Operations
  public:
    DumbAI (State& mainState);
    void run (CommandSet& commands);
    void stateChanged (const StatetEvent& e);
  protected:
    void dumbMove (int idx, CommandSet& command);
  };

  /// class PathMapTarget - 
  class PathMapTarget {
    // Operations
  public:
    virtual ~PathMapTarget ();
    virtual bool const isTarget (int x, int y, Element* element) = 0;
  };

  /// class PathMap - 
  class PathMap {
    // Attributes
  public:
    State& state;
    int* weights;
    int width;
    int height;
    std::vector<Element*> elements;
    // Operations
  public:
    PathMap (State& state);
    ~PathMap ();
    void clear ();
    void addElement (Element* element);
    int const getWidth ();
    int const getHeight ();
    int* const getWeights ();
    int const getMetadata (int x, int y);
    int const getMetadata (int x, int y, Direction direction);
    void setMetadata (int x, int y, int value);
    void setMetadata (int x, int y, int value, Direction direction);
    void initMetadata (int default);
    bool const isValid (int x, int y, Direction direction);
    int relax (int x, int y, Direction direction);
    void dijsktra ();
  };

  /// class HeuristicAI - 
  class HeuristicAI : public AI::DumbAI {
    // Associations
    // Attributes
  protected:
    PathMap playerMap;
    // Operations
  public:
    HeuristicAI (CommandSet& commands, const PathMap& path);
    void run (CommandSet& commands);
  protected:
    bool moveToClosest (CommandSet& commands, const PathMap& path);
  };

};

#endif
