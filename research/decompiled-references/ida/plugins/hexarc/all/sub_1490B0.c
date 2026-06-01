__int64 __fastcall sub_1490B0(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  _DWORD *v6; // rdi
  _DWORD *v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r12
  __m128i *v16; // r14
  __int64 v17; // rax
  char *v18; // rsi
  unsigned __int8 *v19; // [rsp+0h] [rbp-58h] BYREF
  char *v20; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+10h] [rbp-48h] BYREF
  __m128i *v22; // [rsp+18h] [rbp-40h]
  unsigned __int64 v23; // [rsp+28h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) == 4 && *(_BYTE *)(a2 + 48) == 4 )
  {
    v6 = *(_DWORD **)(a2 + 40);
    if ( *v6 == 14 )
    {
      v7 = *(_DWORD **)(a2 + 56);
      if ( *v7 == 14 )
      {
        v8 = sub_1161E0((__int64)v6, &v19);
        if ( v8 )
        {
          v9 = sub_1161E0((__int64)v7, &v20);
          if ( v9 )
          {
            LOBYTE(v10) = sub_11F4A0(v19, (__int64)v20, 0);
            v3 = v10;
            if ( (_BYTE)v10 )
            {
              if ( *v19 != 4 || !(unsigned __int8)sub_119EE0(*((_BYTE **)v19 + 1), a1, 0, v11, v12, v13) )
              {
                v14 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
                if ( *(_DWORD *)a2 == 12 )
                {
                  v15 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL) + v14;
                  goto LABEL_14;
                }
                if ( *(_DWORD *)a2 == 13 )
                {
                  v15 = v14 - *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
LABEL_14:
                  *(_DWORD *)a2 = 14;
                  v21 = 0xFFFFFFFF00000000LL;
                  v22 = nullptr;
                  sub_116350((char *)&v21, (char *)v8);
                  v16 = v22;
                  v17 = sub_323690(v15, HIDWORD(v21), 0);
                  v18 = v20;
                  v16[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
                  sub_116350((char *)(a2 + 32), v18);
                  sub_116350((char *)(a2 + 48), (char *)&v21);
                  sub_1166E0((__int64)&v21);
                  return v3;
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

