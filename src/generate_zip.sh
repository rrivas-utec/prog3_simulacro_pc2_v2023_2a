#!/usr/bin/env bash

project_name='prog3_simulacro_pc2_v2023_2a'
source_code='
  same_values.h
  find_max_double_product.h
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}