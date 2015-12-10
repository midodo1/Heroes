#ifndef ENGINE__H
#define ENGINE__H


namespace engine {

  /// class Command - 
  class Command {
    // Operations
  public:
    Command ();
    int const getCategory ();
    CommandTypeId const getTypeId ();
  };

  /// class DirectionCommand - 
  class DirectionCommand : public engine::Command {
    // Attributes
  protected:
    int Character;
    state:Direction direction;
    // Operations
  public:
    DirectionCommand (int c, state::Direction s);
    int const getCategory ();
    CommandTypeId const getTypeId ();
    int const getCharctere ();
    state::Direction getDirection ();
  };

  /// class CommandSet - 
  class CommandSet {
    // Associations
    // Attributes
  protected:
    static std::map<int,Command*> commands;
    // Operations
  public:
    CommandSet ();
    int const Size ();
    Command* const get (int category);
    void set (Command* cmd);
    void take (CommandSet& commands, bool replace);
  };

  /// class Action - 
  class Action {
    // Operations
  public:
    Action ();
    void apply (state::State& s, bool notify);
    void undo (state::State& s, bool notify);
  };

  /// class ActionList - 
  class ActionList {
    // Associations
    // Attributes
  public:
    stad::vector<Action*> actions;
    bool notify;
  protected:
    state::State& s;
    // Operations
  public:
    ActionList (State::State& s, bool notify);
    ActionList ();
    int const size ();
    Acion* const get (int i);
    void apply ();
    void undo ();
    void add (Action* action);
    void addapply (Action* action);
  };

  /// class Engine - 
  class Engine {
    // Associations
    // Attributes
  protected:
    state::AlementFactory factory;
    state::State currentState;
    CommandSet* currentCommands;
    // Operations
  public:
    const state :: State& const getState ();
    void addCommands (Commands* cmd);
    void takeCommands (CommandSet& commands);
    bool update (int64_t time, int64_t*=NULL next_time);
  };

  /// class MoveCharacter - 
  class MoveCharacter : public engine::Action {
    // Attributes
  protected:
    int idx;
    int dx;
    int dy;
    state::Direction prevDirection;
    state::Direction newDirection;
    // Operations
  public:
    MoveCharacter (int idx);
    void SetCoords (int dx, int dy, int dpos);
    void setDirection (state::Direction prev, state::Direction next);
    void apply (State::State& s, bool notify);
    void undo (State:: State& s, bool notify);
  };

};

#endif
