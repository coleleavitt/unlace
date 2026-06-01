bool __fastcall gdl_graph_t::empty(gdl_graph_t *this)
{
  unsigned int (*v1)(void); // rdx
  unsigned int (*v2)(void); // rax

  v1 = *(unsigned int (**)(void))(*(_QWORD *)this + 64LL);
  if ( (char *)v1 != (char *)gdl_graph_t::node_qty )
    return v1() == 0;
  v2 = *(unsigned int (**)(void))(*(_QWORD *)this + 56LL);
  if ( (char *)v2 == (char *)qflow_chart_t::size )
    return *((_DWORD *)this + 20) == 0;
  else
    return v2() == 0;
}

