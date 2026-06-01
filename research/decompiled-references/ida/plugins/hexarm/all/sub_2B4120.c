__int64 __fastcall sub_2B4120(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v2 = -1;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 >= v3 )
    v2 = v3 < v4;
  clear_tinfo_t();
  clear_tinfo_t();
  return v2;
}

