/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "HeuristicAI.h"




HeuristicAI::HeuristicAI(State& mainSt) : DumbAI(mainSt){}

bool HeuristicAI::moveToClosest(Engine& engine,const PathMap& path, Element* element){
	
	int x = element->getX();
	int y = element->getY();
	int N ; 
	
	int x_move = 0;
	int y_move = 0;
	
	int width = path.getWidth();
	int* weights = path.getWeights();
	
	int value = 999;
	
	for(int i=0; i<2*1+1; i++){		
		for(int j=0; j<2*1+1; j++){
			
			int x_move = x - 1 + i;
			int y_move = y - 1 + j;
			
			if(weights[x_move * width + y_move] == 0){	

				MoveCharacter* move = new MoveCharacter(x, y, element);
				
				return true;
			}
		}
	}
	
	for(int i=0; i<2*N+1; i++){
		for(int j=0; j<2*N+1; j++){
			
			int x_tmp = x - N + i;
			int y_tmp = y - N + j;
			
			if(path.isValid(x_tmp, y_tmp) && weights[x_tmp * width + y_tmp]<999){		
				
				if(weights[x_tmp * width + y_tmp] <  value && weights[x_tmp * width + y_tmp] !=0){		//on cherche la case avec le poids le moins fort dans la limite du nombre de pas
					value = weights[x_tmp * width + y_tmp];
					x_move = x_tmp;
					y_move = y_tmp;
				}
			}
		}
	}

	if(value<999){		
		MoveCharacter* move = new MoveCharacter(x_move, y_move, element);
		
		return true;
	}
	return false;
}

void HeuristicAI::run(Engine& engine){}