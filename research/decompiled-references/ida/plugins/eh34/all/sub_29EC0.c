__int64 __fastcall sub_29EC0(__int64 a1, __int64 a2, __int64 a3, int a4, char *a5, double a6)
{
  char v6; // al
  int v8; // eax
  __int64 v10; // rax
  __m128i v11; // xmm0
  _QWORD *v12; // rax
  unsigned __int64 v13; // rsi
  _QWORD *v14; // r8
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // [rsp+0h] [rbp-28h] BYREF
  __m128i v20; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-10h]

  v6 = *a5;
  v21 = __readfsqword(0x28u);
  if ( v6 == 6 )
  {
    v12 = *(_QWORD **)(a3 + 16);
    v13 = *((_QWORD *)a5 + 1);
    v14 = (_QWORD *)(a3 + 8);
    if ( !v12 )
      goto LABEL_13;
    v15 = (_QWORD *)(a3 + 8);
    do
    {
      while ( 1 )
      {
        v16 = v12[2];
        v17 = v12[3];
        if ( v12[4] >= v13 )
          break;
        v12 = (_QWORD *)v12[3];
        if ( !v17 )
          goto LABEL_11;
      }
      v15 = v12;
      v12 = (_QWORD *)v12[2];
    }
    while ( v16 );
LABEL_11:
    if ( v14 != v15 && v13 >= v15[4] )
    {
      v18 = *((_DWORD *)v15 + 10);
      *(_BYTE *)(a1 + 24) = 0;
      *(_DWORD *)a1 = v18;
    }
    else
    {
LABEL_13:
      *(_DWORD *)a1 = -1;
      *(_BYTE *)(a1 + 24) = 0;
    }
  }
  else if ( v6 == 7 )
  {
    v8 = *((_DWORD *)a5 + 2) + 1 - a4;
    *(_BYTE *)(a1 + 24) = 0;
    *(_DWORD *)a1 = v8;
  }
  else
  {
    sub_19A90((__int64)&v19, (__int64)"block_from_mop(%a): invalid mop type %d", a6, *(_QWORD *)(a2 + 40));
    v10 = v19;
    v11 = _mm_loadu_si128(&v20);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v10;
    *(__m128i *)(a1 + 8) = v11;
  }
  return a1;
}

