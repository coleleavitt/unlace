__int64 __fastcall sub_14F770(__int64 a1, __int64 a2, double a3)
{
  unsigned int v4; // ebp
  _DWORD *v7; // rdi
  _DWORD *v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r13
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r12
  __m128i *v14; // r14
  __int64 v15; // rax
  char *v16; // rsi
  unsigned __int8 *v17; // [rsp+0h] [rbp-58h] BYREF
  char *v18; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+10h] [rbp-48h] BYREF
  __m128i *v20; // [rsp+18h] [rbp-40h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) == 4 && *(_BYTE *)(a2 + 48) == 4 )
  {
    v7 = *(_DWORD **)(a2 + 40);
    if ( *v7 == 14 )
    {
      v8 = *(_DWORD **)(a2 + 56);
      if ( *v8 == 14 )
      {
        v9 = sub_11C8A0((__int64)v7, &v17);
        if ( v9 )
        {
          v10 = sub_11C8A0((__int64)v8, &v18);
          if ( v10 )
          {
            LOBYTE(v11) = sub_125B60(v17, (__int64)v18, 0, a3);
            v4 = v11;
            if ( (_BYTE)v11 )
            {
              if ( *v17 != 4 || !(unsigned __int8)sub_1205A0(*((_BYTE **)v17 + 1), a1, 0) )
              {
                v12 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
                if ( *(_DWORD *)a2 == 12 )
                {
                  v13 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 16LL) + v12;
                  goto LABEL_14;
                }
                if ( *(_DWORD *)a2 == 13 )
                {
                  v13 = v12 - *(_QWORD *)(*(_QWORD *)(v10 + 8) + 16LL);
LABEL_14:
                  *(_DWORD *)a2 = 14;
                  v19 = 0xFFFFFFFF00000000LL;
                  v20 = nullptr;
                  sub_11CA10((char *)&v19, (char *)v9);
                  v14 = v20;
                  v15 = sub_32ABC0(v13, SHIDWORD(v19), 0);
                  v16 = v18;
                  v14[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
                  sub_11CA10((char *)(a2 + 32), v16);
                  sub_11CA10((char *)(a2 + 48), (char *)&v19);
                  sub_11CDA0((__int64)&v19);
                  return v4;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

