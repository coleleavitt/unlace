__int64 __fastcall sub_DB80(_QWORD *a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rcx
  unsigned __int64 *v8; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  unsigned __int64 *v12; // r10

  v7 = a1[3];
  v8 = (unsigned __int64 *)a1[2];
  v10 = 0xFFFFFFFFLL;
  v11 = 8 * v7;
  v12 = &v8[v7];
  if ( 8 * v7 )
  {
    v10 = 0;
    while ( a2 >= *v8 )
    {
      ++v8;
      v11 = (unsigned int)(v10 + 1);
      if ( v8 == v12 )
        goto LABEL_7;
      v10 = (unsigned int)v11;
    }
    v10 = (unsigned int)(v10 - 1);
  }
LABEL_7:
  if ( v10 < a1[7] )
    return sub_C7C0(*(_QWORD *)(a1[6] + 8 * v10), a3, a4, 0x4Eu);
  sub_BBD0(v10, a3, a4, v7, v11, a2, (char)v8);
  return sub_DC00();
}

