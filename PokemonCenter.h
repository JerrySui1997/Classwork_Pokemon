#pragma once
#include "Building.h"

namespace N
{
	class PokemonCenter : Building
	{
		//variables
		public enum PokemonCenterState {POTIONS_AVAILABLE,NO_POTIONS_AVAILABLE};
		private unsigned int potion_capacity;
		private unsigned int num_potions_remaining;
		private double pokedollar_cost_per_potion;
		//constructor
		public class PokemonCenter(int in_id, double potion_cost, unsigned int potion_cap, Point2D in_loc);
		//methods
		public bool HasPotions();
		public unsigned int GetNumPotionRemaining();
		public bool CanAffordPotion(unsigned int potion, double budget);
		public double GetPokeDollarCost(unsigned int potion);
		public unsigned int DistributePotion(unsigned int potion_needed);
		bool Update();
		void ShowStatus();
	};
}
