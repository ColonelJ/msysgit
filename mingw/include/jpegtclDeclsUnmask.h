#ifdef WIN32
/* Restore the usage of the original names */
#undef jpeg_std_error
#undef jpeg_CreateCompress
#undef jpeg_CreateDecompress
#undef jpeg_destroy_compress
#undef jpeg_destroy_decompress
#undef jpeg_stdio_dest
#undef jpeg_stdio_src
#undef jpeg_set_defaults
#undef jpeg_set_colorspace
#undef jpeg_default_colorspace
#undef jpeg_set_quality
#undef jpeg_set_linear_quality
#undef jpeg_add_quant_table
#undef jpeg_quality_scaling
#undef jpeg_simple_progression
#undef jpeg_suppress_tables
#undef jpeg_alloc_quant_table
#undef jpeg_alloc_huff_table
#undef jpeg_start_compress
#undef jpeg_write_scanlines
#undef jpeg_finish_compress
#undef jpeg_write_raw_data
#undef jpeg_write_marker
#undef jpeg_write_m_header
#undef jpeg_write_m_byte
#undef jpeg_write_tables
#undef jpeg_read_header
#undef jpeg_start_decompress
#undef jpeg_read_scanlines
#undef jpeg_finish_decompress
#undef jpeg_read_raw_data
#undef jpeg_has_multiple_scans
#undef jpeg_start_output
#undef jpeg_finish_output
#undef jpeg_input_complete
#undef jpeg_new_colormap
#undef jpeg_consume_input
#undef jpeg_calc_output_dimensions
#undef jpeg_save_markers
#undef jpeg_set_marker_processor
#undef jpeg_read_coefficients
#undef jpeg_write_coefficients
#undef jpeg_copy_critical_parameters
#undef jpeg_abort_compress
#undef jpeg_abort_decompress
#undef jpeg_abort
#undef jpeg_destroy
#undef jpeg_resync_to_restart
#endif /* WIN32 */
