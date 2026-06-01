__int64 __fastcall sub_3A0120(__int64 a1, double a2, __m128 a3, __m128i a4, double a5)
{
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned int v11; // eax
  char v12; // r8
  __int64 v13; // r12
  void *v14; // r9
  void *v15; // rax
  void *v16; // [rsp+8h] [rbp-88h]
  char v17; // [rsp+17h] [rbp-79h]
  char v18; // [rsp+17h] [rbp-79h]
  __int64 *v19; // [rsp+18h] [rbp-78h]
  unsigned int v20; // [rsp+2Ch] [rbp-64h] BYREF
  __int64 v21; // [rsp+30h] [rbp-60h] BYREF
  __int64 v22; // [rsp+38h] [rbp-58h] BYREF
  void *src; // [rsp+40h] [rbp-50h] BYREF
  __int128 v24; // [rsp+48h] [rbp-48h]
  unsigned __int64 v25; // [rsp+58h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 128);
  v25 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v5 + 1008);
  v19 = sub_38C8E0(a1, &v21, (int *)&v20, a2);
  if ( !v19 )
    return 0;
  v7 = *(unsigned int *)(v6 + 8);
  v22 = 0;
  ((void (__fastcall *)(__int64, __int64, __int64 *, __int64, const char *, __int64, _QWORD, __int64))callui)(
    16,
    13,
    &v22,
    v7,
    "Please choose enum",
    v21,
    v20,
    v6 + 12);
  v9 = v8;
  if ( (_BYTE)v8 )
  {
    src = nullptr;
    v9 = 0;
    v24 = 0;
    if ( (v22 & 0x100) != 0 )
    {
      if ( get_tinfo_pdata() )
      {
        LOBYTE(v11) = sub_32CB80(&v22, *(_QWORD *)(a1 + 128), 0.0, a3);
        v9 = v11;
        if ( (_BYTE)v11 )
        {
          *(_DWORD *)(v6 + 8) = get_tinfo_property();
          v12 = *(_BYTE *)(v6 + 12);
          v19[5] = v19[5] & 0xFF000000F00FFFFFLL | 0x88888808800000LL;
          if ( v19 + 2 != (__int64 *)&src )
          {
            v13 = v24;
            if ( (unsigned __int64)v24 < 2 )
            {
              v19[3] = 0;
            }
            else
            {
              v14 = src;
              v15 = (void *)v19[2];
              if ( v19[4] < (unsigned __int64)v24 )
              {
                v18 = v12;
                v16 = src;
                v15 = (void *)qvector_reserve((__int64)(v19 + 2), (__int64)v15, v24, 1);
                v14 = v16;
                v12 = v18;
                v19[2] = (__int64)v15;
              }
              v17 = v12;
              v19[3] = v13;
              memmove(v15, v14, v13 - 1);
              v12 = v17;
              *(_BYTE *)(v19[2] + v13 - 1) = 0;
            }
          }
          *((_BYTE *)v19 + 13) |= 0x21u;
          *((_BYTE *)v19 + 14) = v12;
          sub_39FD80(a1, (__int64)v19, 1u, (__m128)0LL, a3, a4, a5);
          goto LABEL_8;
        }
        sub_2B4E70((__int64)"AUTOHIDE NONE\nToo long/wide enum. It cannot be used by the decompiler, sorry");
      }
      v9 = 0;
LABEL_8:
      if ( src )
      {
        *(_QWORD *)&v24 = 0;
        qfree((__int64)src);
      }
    }
  }
  clear_tinfo_t();
  return v9;
}

