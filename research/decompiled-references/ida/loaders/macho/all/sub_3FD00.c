unsigned __int64 __fastcall sub_3FD00(__int64 a1, __int64 *a2, __int64 (*a3)())
{
  __int64 (*v3)(); // rcx
  __int64 v5; // rdi
  __m128i v6; // xmm0
  int v7; // eax
  unsigned __int64 v8; // r13
  _QWORD *v9; // rdi
  unsigned int v10; // r14d
  _QWORD *v11; // r12
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned int *v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // r12
  __m128i v19; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v20; // [rsp+10h] [rbp-98h] BYREF
  int v21; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v22; // [rsp+58h] [rbp-50h]
  unsigned int v23; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v24; // [rsp+78h] [rbp-30h]

  v3 = (__int64 (*)())off_63678;
  v5 = *a2;
  v24 = __readfsqword(0x28u);
  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_63678, (__m128i)(unsigned __int64)&v21);
  if ( v5 )
  {
    a2[1] = 0;
    v19 = v6;
    qfree();
    *a2 = 0;
    v6 = _mm_load_si128(&v19);
    a2[2] = 0;
  }
  v20 = v6;
  v21 = 0;
  if ( (unsigned __int8)sub_27280(a1, &v20, a3, v3) )
  {
    v7 = *(_DWORD *)(a1 + 480);
    if ( (v7 & 2) != 0 )
    {
      v8 = v23;
LABEL_6:
      sub_311A0(a2, v8);
      v9 = *(_QWORD **)(a1 + 512);
      v10 = v22;
      if ( v9 )
      {
        v11 = sub_1C4C0(v9, v22, (__int64 *)(a1 + 224));
        if ( v11 )
        {
          qlseek();
          sub_3FB70(a2, (__int64)v11, -1, v8, v20.m128i_i64[0], (__int64)"indirect symbol table size", 0);
        }
      }
      else
      {
        v18 = sub_1B0C0(a1, *(_DWORD *)(a1 + 128));
        sub_1B0C0(a1, v10);
        qlseek();
        sub_3FB70(a2, *(_QWORD *)(a1 + 48), -1, v8, v18, (__int64)"indirect symbol table size", 0);
      }
      if ( *(_BYTE *)(a1 + 160) )
      {
        v15 = (unsigned int *)*a2;
        if ( (_DWORD)v8 )
        {
          v16 = (__int64)&v15[(unsigned int)(v8 - 1) + 1];
          do
          {
            v17 = *v15++;
            *(v15 - 1) = _byteswap_ulong(v17);
          }
          while ( v15 != (unsigned int *)v16 );
        }
      }
      return v24 - __readfsqword(0x28u);
    }
    v13 = v22;
    v14 = *(_QWORD *)(a1 + 128);
    if ( v22 < v14 )
    {
      v8 = v23;
      if ( v14 < v22 + 4 * (unsigned __int64)v23 )
      {
        if ( (v7 & 4) == 0 )
        {
          sub_112F0((__int64)"indirect symbol table extends past end of file\n");
          v14 = *(_QWORD *)(a1 + 128);
          v13 = v22;
        }
        v8 = (v14 - v13) >> 2;
      }
      goto LABEL_6;
    }
    if ( (v7 & 4) == 0 )
      sub_112F0((__int64)"indirect symbol table offset is past end of file\n");
  }
  return v24 - __readfsqword(0x28u);
}

