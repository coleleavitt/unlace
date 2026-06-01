__int64 __fastcall sub_3CAEA0(unsigned __int8 *a1, __int64 a2, double a3)
{
  unsigned __int8 v3; // al
  __int64 v5; // rax

  v3 = *a1;
  if ( *a1 == 7 )
  {
    v5 = *((unsigned int *)a1 + 2);
    if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 64) )
      sub_3CAE80(a3);
    return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 528) + 8 * v5) + 32LL);
  }
  else
  {
    if ( v3 > 7u )
    {
      if ( v3 == 8 )
        return **((_QWORD **)a1 + 1);
      return -1;
    }
    if ( v3 != 2 )
    {
      if ( v3 == 6 )
        return *((_QWORD *)a1 + 1);
      return -1;
    }
    if ( !(unsigned __int8)is_mapped() )
      return -1;
    return *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL);
  }
}

