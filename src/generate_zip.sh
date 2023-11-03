#!/usr/bin/env bash

project_name='prog3_pc2_teo2_v2023_2'
source_code='
  consolidate_ranges.h
  parallel_consolidate_ranges.h
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}