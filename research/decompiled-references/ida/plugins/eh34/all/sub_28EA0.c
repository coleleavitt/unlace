__int64 __fastcall sub_28EA0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  _DWORD *v5; // rax
  void *v6; // rax
  void *v7; // rax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __m128i v9; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a3 )
  {
    if ( !*(_BYTE *)(a2 + 268) )
      goto LABEL_5;
    if ( *(_DWORD *)(a2 + 264) == a3 )
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v7 = (void *)qvector_reserve(a1, 0, 11, 1);
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 8) = 11;
      qmemcpy(v7, "NORET_EXIT", 10);
      *(_BYTE *)(*(_QWORD *)a1 + 10LL) = 0;
      return a1;
    }
    if ( *(_DWORD *)(a2 + 272) == a3 )
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v6 = (void *)qvector_reserve(a1, 0, 11, 1);
      *(_QWORD *)a1 = v6;
      *(_QWORD *)(a1 + 8) = 11;
      qmemcpy(v6, "FINAL_EXIT", 10);
      *(_BYTE *)(*(_QWORD *)a1 + 10LL) = 0;
    }
    else
    {
LABEL_5:
      if ( *(_DWORD *)(a2 + 200) == a3 )
      {
        *(_QWORD *)a1 = 0;
        *(_OWORD *)(a1 + 8) = 0;
        v5 = (_DWORD *)qvector_reserve(a1, 0, 5, 1);
        *(_QWORD *)a1 = v5;
        *(_QWORD *)(a1 + 8) = 5;
        *v5 = 1414092869;
        *(_BYTE *)(*(_QWORD *)a1 + 4LL) = 0;
      }
      else
      {
        v8 = 0;
        v9 = 0;
        if ( a3 < 0 )
        {
          sub_FB10(&v8, (__int64)"INVALID_MINUS_%d", -a3);
        }
        else if ( *(_DWORD *)(a2 + 204) < a3 )
        {
          sub_FB10(&v8, (__int64)"INVALID_TOOBIG_%d", a3);
        }
        else
        {
          sub_FB10(&v8, (__int64)"%a[%d]", 0.0, *(_QWORD *)(*(_QWORD *)(a2 + 280) + 24LL * (a3 - 1)));
        }
        *(_QWORD *)a1 = v8;
        *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v9);
      }
    }
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v3 = qvector_reserve(a1, 0, 6, 1);
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 8) = 6;
    *(_DWORD *)v3 = 1380013139;
    *(_BYTE *)(v3 + 4) = 84;
    *(_BYTE *)(*(_QWORD *)a1 + 5LL) = 0;
  }
  return a1;
}

