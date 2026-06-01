__int64 __fastcall gdl_graph_t::exit(gdl_graph_t *this)
{
  unsigned int (*v1)(void); // rax

  v1 = *(unsigned int (**)(void))(*(_QWORD *)this + 56LL);
  if ( (char *)v1 == (char *)qflow_chart_t::size )
    return (unsigned int)(*((_DWORD *)this + 20) - 1);
  else
    return v1() - 1;
}

