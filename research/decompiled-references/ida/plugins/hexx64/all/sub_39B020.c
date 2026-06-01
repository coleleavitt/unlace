__int64 *__fastcall sub_39B020(__int64 a1, __int64 *a2, double a3, double a4, __m128i a5, double a6)
{
  __int64 v6; // rbp
  __int16 v7; // bx
  __int64 module_data; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  int v13; // r14d
  int v14; // esi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  int v23; // [rsp+18h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-38h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v6 = a1;
  v25 = __readfsqword(0x28u);
  v7 = (__int16)a2;
  module_data = get_module_data();
  v12 = module_data;
  if ( (_DWORD)a2 == -1 )
  {
    if ( a1 != -1 )
    {
      if ( sub_389C40(module_data, a2) )
      {
        v7 = 2;
        goto LABEL_5;
      }
      goto LABEL_12;
    }
    v7 = 2;
  }
  else
  {
    v13 = (unsigned __int8)a2 & 7;
    if ( a1 != -1 )
    {
LABEL_3:
      if ( v13 == 2 )
      {
        if ( sub_389C40(v12, a2) )
          goto LABEL_5;
        LOBYTE(v7) = v7 & 0xF8 | 1;
      }
      else if ( v13 != 1 )
      {
LABEL_5:
        v14 = (32 * v7) & 0x100 | 5;
LABEL_6:
        v23 = 0;
        v22 = 0xFFFFFFFFLL;
        v24 = -1;
        return sub_3948E0(
                 (__int64)&v22,
                 v14,
                 0,
                 0,
                 *(double *)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v6).m128i_i64,
                 a4,
                 a5,
                 a6);
      }
      v14 = 265;
      if ( (v7 & 8) != 0 )
        goto LABEL_6;
LABEL_12:
      v14 = 9;
      goto LABEL_6;
    }
    if ( ((unsigned __int8)a2 & 7) == 0 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &v22, &callui, v9, v10, v11);
      v6 = v22;
      goto LABEL_5;
    }
  }
  v16 = sub_389C40(module_data, a2);
  if ( !v16 )
  {
    a2 = &v22;
    v13 = v7 & 7;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &v22, &callui, v18, v19, v20);
    v6 = v22;
    goto LABEL_3;
  }
  v21 = v16;
  sub_395A90(v16, 0, a3, v17, v18, v19, a4, a5, a6);
  return (__int64 *)v21;
}

