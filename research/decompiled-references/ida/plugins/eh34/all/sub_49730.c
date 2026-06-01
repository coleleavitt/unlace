__int64 __fastcall sub_49730(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // rbp
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  char *v9; // rbx
  unsigned int *v10; // r15
  char v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r14d
  __int64 v15; // rax
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdx
  __int64 *v19; // rsi
  signed __int64 v20; // rcx
  __m128i v22; // xmm0
  __int64 v23; // [rsp+10h] [rbp-B8h]
  __int64 v24; // [rsp+18h] [rbp-B0h]
  __int64 v27; // [rsp+40h] [rbp-88h] BYREF
  __m128i v28; // [rsp+48h] [rbp-80h] BYREF
  void *v29; // [rsp+60h] [rbp-68h] BYREF
  int v30; // [rsp+68h] [rbp-60h]
  __int64 v31; // [rsp+70h] [rbp-58h]
  int v32; // [rsp+78h] [rbp-50h]
  __int64 v33; // [rsp+80h] [rbp-48h]
  unsigned __int64 v34; // [rsp+88h] [rbp-40h]

  v6 = a2 + 48;
  v34 = __readfsqword(0x28u);
  v7 = a4;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v23 = a3 + 16LL * a4 + 24;
  v8 = sub_4CAC0(a2 + 48);
  v29 = nullptr;
  v33 = 0;
  sub_48FC0((__int64)&v29, nullptr, 0, v8, 0);
  v9 = (char *)v29;
  v24 = v33;
  if ( !*(_DWORD *)(16 * v7 + a3 + 32) )
  {
    v10 = (unsigned int *)v23;
    v11 = 0;
    while ( 1 )
    {
      v14 = *v10;
      v15 = sub_4CAD0(v6, *v10);
      if ( *(_DWORD *)(v15 + 4) )
        break;
      v18 = (int)v14 + 63LL;
      if ( (v14 & 0x80000000) == 0 )
        v18 = (int)v14;
      v19 = (__int64 *)&v9[8 * (v18 >> 6)];
      v20 = ((((unsigned __int64)((__int64)(int)v14 >> 63) >> 58) + (_BYTE)v14) & 0x3F)
          - ((unsigned __int64)((__int64)(int)v14 >> 63) >> 58);
      if ( v20 >= 0 )
      {
        v12 = 1LL << v20;
        v13 = *v19;
        if ( (*v19 & v12) != 0 )
          goto LABEL_16;
      }
      else
      {
        v12 = 1LL << ((unsigned __int8)v20 + 64);
        v13 = *(v19 - 1);
        if ( (v13 & v12) != 0 )
        {
LABEL_16:
          sub_64B50(
            (unsigned int)&v27,
            *(_QWORD *)(a2 + 8),
            (unsigned int)"prune_internal_gotos: goto loop detected at block %zu",
            a5,
            v16,
            v17);
          v22 = _mm_loadu_si128(&v28);
          *(_QWORD *)a1 = v27;
          *(_BYTE *)(a1 + 24) = 1;
          *(__m128i *)(a1 + 8) = v22;
          goto LABEL_13;
        }
        --v19;
      }
      v10 = (unsigned int *)(v15 + 24);
      v11 = 1;
      *v19 = v13 | v12;
      if ( *(_DWORD *)(v15 + 32) )
        goto LABEL_17;
    }
    if ( !v11 )
      goto LABEL_12;
LABEL_17:
    sub_4BFD0(v23, v10);
  }
LABEL_12:
  *(_BYTE *)(a1 + 24) = 0;
LABEL_13:
  if ( v9 )
    operator delete(v9, v24 - (_QWORD)v9);
  return a1;
}

