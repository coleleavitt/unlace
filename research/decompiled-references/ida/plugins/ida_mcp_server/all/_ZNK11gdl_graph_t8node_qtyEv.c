__int64 __fastcall gdl_graph_t::node_qty(gdl_graph_t *this)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)this + 56LL);
  if ( (char *)v1 == (char *)qflow_chart_t::size )
    return *((unsigned int *)this + 20);
  else
    return v1();
}

