unsigned __int64 __fastcall sub_15F3E0(__m128i *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v6; // r12
  signed int v7; // eax
  __int64 *v8; // rdi
  int v10; // eax
  unsigned __int8 *v11; // r13
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rbx
  __int64 v14; // rax
  signed int i; // ebx
  __int64 *v16; // rax
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-30h]

  v6 = a1->m128i_i64[0];
  v18 = __readfsqword(0x28u);
  if ( !(unsigned int)sub_143A40((__int64 **)a1, a4) )
  {
    if ( a2 )
    {
      if ( *(_DWORD *)(a3 + 8) || (v7 = sub_DCE90(v6, a2), v7 < 0) )
      {
        v10 = sub_E4190(a1->m128i_i64, a2, a3, &v17);
        if ( v10 >= 0 )
        {
          v11 = nullptr;
          if ( *(_DWORD *)(a3 + 8) )
            v11 = *(unsigned __int8 **)(*(_QWORD *)(v6 + 32) + 32LL * v10);
          v12 = (unsigned __int8 *)sub_DCE50(v6, v17);
          v13 = v12;
          if ( v12 )
          {
            v14 = sub_CF360(v6, v12, v11);
            if ( v14 )
            {
              sub_15F330(a1, *(__int64 **)(v14 + 24), (__int64 *)v14, a4);
            }
            else
            {
              v16 = (__int64 *)sub_144100((__int64)a1, 0, v13, v11, a4);
              if ( v16 )
                sub_15F330(a1, v16, nullptr, a4);
            }
            sub_C9250(v6, v13);
          }
        }
      }
      else
      {
        sub_15F290(a1, v7, a4);
      }
    }
    else
    {
      for ( i = 0; *(_DWORD *)(v6 + 40) > i; ++i )
      {
        if ( i != 1 )
          sub_15F290(a1, i, a4);
      }
    }
    if ( !*(_BYTE *)(v6 + 112) )
    {
      v8 = (__int64 *)a1[1].m128i_i64[0];
      if ( v8 || (v8 = sub_E2050(a1->m128i_i64)) != nullptr )
        sub_E1710((__int64)v8, 166, 0, 0, 0);
    }
  }
  return __readfsqword(0x28u) ^ v18;
}
