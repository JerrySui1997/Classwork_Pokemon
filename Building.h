#pragma once
#define Building
#include "Point2D.h"
namespace N
{
	class Building
	{
		private unsigned int trainer_count;
		public Building(char in_code, int in_Id, Point2D in_loc);
		public void AddOneTrainer();
		public void RemoveOneTrainer();
		public void ShowStatus();
		public bool ShouldBeVisible();
	};
}
