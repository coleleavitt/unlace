__int64 __fastcall sub_1FC560(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  _QWORD *v12; // rax
  unsigned __int64 i; // rbx
  __int64 v14; // r15
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  _DWORD *v17; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // r15

  if ( (unsigned __int8)sub_121AD0(a5, (__int64)a4, a4[22], nullptr) )
  {
    v12 = *(_QWORD **)(a1 + 48);
    for ( i = *(int *)(a1 + 104); i < v12[1]; ++i )
    {
      v14 = *v12 + 104 * i;
      if ( a4 != (_DWORD *)v14 && (*(_BYTE *)(v14 + 25) & 0x10) == 0 )
      {
        if ( (unsigned __int8)sub_1C4AE0(
                                (int *)(*v12 + 104 * i),
                                *(int *)(v14 + 88),
                                *(int **)(a5 + 8),
                                *(int *)(a5 + 4),
                                *(double *)a7.m128i_i64) )
        {
          v15 = a3[1];
          v16 = (_DWORD *)(*a3 + 4 * v15);
          if ( (_DWORD *)*a3 == v16 )
            goto LABEL_15;
          v17 = (_DWORD *)*a3;
          while ( *v17 != (_DWORD)i )
          {
            if ( v16 == ++v17 )
              goto LABEL_15;
          }
          if ( v16 == v17 )
          {
LABEL_15:
            v19 = v15 + 1;
            if ( a3[2] < v19 )
            {
              v20 = qvector_reserve((__int64)a3, *a3, v19, 4);
              v21 = a3[1];
              *a3 = v20;
              *(_DWORD *)(v20 + 4 * v21) = i;
            }
            else
            {
              *v16 = i;
            }
            ++a3[1];
          }
          if ( !(unsigned __int8)sub_121AD0(a5, v14, *(_DWORD *)(v14 + 88), nullptr) )
          {
            sub_1C3110(v14, 0, 0, *(double *)a7.m128i_i64);
            *(_DWORD *)(v14 + 24) |= 0x400u;
            return 0;
          }
        }
        v12 = *(_QWORD **)(a1 + 48);
      }
    }
    copy_argloc();
    return *(unsigned int *)(a5 + 4);
  }
  else
  {
    v22 = sub_1C3110((__int64)a4, 0, 0, *(double *)a7.m128i_i64);
    if ( (unsigned __int8)sub_1C3110(*(_QWORD *)(a5 + 8), 0, 0, *(double *)a7.m128i_i64) )
    {
      return sub_1FBEF0(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    else
    {
      if ( !v22 )
        sub_6D0A0((__int64)"Expanding scattered variables is not implemented yet\n");
      return 0;
    }
  }
}

