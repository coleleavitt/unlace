__int64 __fastcall sub_14A40(__int64 a1, __int64 a2, int *a3, double a4, __m128i a5, __m128 a6, __m128 a7)
{
  unsigned int v9; // eax
  __int64 *v10; // rdx
  __int64 v11; // r12
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 *v16; // rax
  unsigned int v17; // eax
  _DWORD *v18; // rdx
  __int64 v19; // r12
  void (__fastcall *hexdsp)(__int64, __int64 (__fastcall *)(__int64, int, int *), __int64); // rax
  __int64 *v21; // rdx
  _QWORD v22[5]; // [rsp+0h] [rbp-28h] BYREF

  v22[1] = __readfsqword(0x28u);
  if ( a2 == 75 )
  {
    if ( (unsigned int)callui(7, 0xDEC0DE00000004LL, v22) == 14598366 )
    {
      v19 = *(_QWORD *)(a1 + 16);
      hexdsp = (void (__fastcall *)(__int64, __int64 (__fastcall *)(__int64, int, int *), __int64))get_hexdsp();
      hexdsp(574, sub_14970, v19);
    }
    v17 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v18 = *((_DWORD **)a3 + 1);
      *((_QWORD *)a3 + 1) = v18 + 2;
    }
    else
    {
      v18 = (_DWORD *)(*((_QWORD *)a3 + 2) + v17);
      *a3 = v17 + 8;
    }
    if ( !*v18 )
      sub_11310(*(_QWORD **)(a1 + 16), a4, a5, a6, a7);
  }
  else if ( a2 == 138 )
  {
    v9 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v10 = *((__int64 **)a3 + 1);
      *((_QWORD *)a3 + 1) = v10 + 1;
    }
    else
    {
      v10 = (__int64 *)(*((_QWORD *)a3 + 2) + v9);
      *a3 = v9 + 8;
    }
    v11 = *v10;
    if ( (unsigned int)callui(144, *v10, &callui) == 27 )
    {
      v12 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v21 = *((__int64 **)a3 + 1);
        v16 = v21 + 1;
        *((_QWORD *)a3 + 1) = v21 + 1;
        v15 = *v21;
      }
      else
      {
        v13 = *((_QWORD *)a3 + 2);
        v14 = v12 + 8;
        *a3 = v14;
        v15 = *(_QWORD *)(v13 + v12);
        if ( (unsigned int)v14 <= 0x2F )
        {
          v16 = (__int64 *)(v14 + v13);
          *a3 = v12 + 16;
LABEL_10:
          sub_14240(*(_QWORD *)(a1 + 16), v11, v15, *(_QWORD *)(*v16 + 96));
          return 0;
        }
        v16 = *((__int64 **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v16 + 1;
      goto LABEL_10;
    }
  }
  return 0;
}

