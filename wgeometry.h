#ifndef WGEOMETRY_H
#define WGEOMETRY_H

class wgeometry {
	unsigned 	n_box;
	unsigned 	n_cyl;
	unsigned 	n_hex;
	unsigned 	n_sph;
	unsigned 	n_primitives;
	unsigned 	n_transforms;
	unsigned 	outer_cell;
	unsigned 	n_materials;
	unsigned 	n_isotopes;
	unsigned 	fissile_flag;
	unsigned * 	material_num_list;
	unsigned * 	cell_num_list;
public:
	 wgeometry();
	~wgeometry();
	unsigned get_minimum_cell();
	unsigned get_maximum_cell();
	unsigned get_primitive_count();
	unsigned get_transform_count();
	void add_primitive();
	void update();
	void print_summary();
	void print_all();
	void set_outer_cell(unsigned);
	unsigned get_outer_cell();
	void add_material(unsigned , unsigned, unsigned , float, unsigned * , float * );
	int check();
	unsigned get_outer_cell_dims(float*);
	unsigned get_material_count();
	void make_material_table();
	void get_material_table(unsigned*,unsigned*,unsigned**,unsigned**,float**);
	void print_materials_table();
	unsigned check_fissile();
	std::vector<primitive>   	primitives;
	std::vector<material_def>	materials;
	std::vector<unsigned>		isotopes;
	std::string 				isotope_list;
	unsigned *	isotope_list_array;
	unsigned *	material_list_array;
	float * 	concentrations_matrix;
	float * 	awr_list;
};

#endif
