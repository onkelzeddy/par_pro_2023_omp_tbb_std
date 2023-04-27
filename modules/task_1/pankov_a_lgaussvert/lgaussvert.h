// Copyright 2023 Pankov Anatoliy

#ifndef MODULES_TASK_1_PANKOV_A_LGAUSSVERT_LGAUSSVERT_H_
#define MODULES_TASK_1_PANKOV_A_LGAUSSVERT_LGAUSSVERT_H_

#include <vector>
#include <random>
#include <ctime>

int Clamp(int value, int max, int min);
std::vector<double> MakeRandomMatrix(int m, int n);
std::vector<double> SeqGaussFilter(const std::vector<double>& matrix, int m, int n);

#endif  // MODULES_TASK_1_PANKOV_A_LGAUSSVERT_LGAUSSVERT_H_
