__int64 __fastcall sub_184280(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __m128i a6, __m128 a7)
{
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v11; // rbp
  __int64 (__fastcall *v12)(__int64, unsigned int); // rdx
  unsigned __int8 v15; // al
  int v16; // r12d
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, unsigned int); // rax
  __int64 v20; // rax
  __int64 v21; // [rsp-10h] [rbp-78h]
  __int64 v22; // [rsp-8h] [rbp-70h]
  int v23; // [rsp+4h] [rbp-64h]
  char v24[4]; // [rsp+10h] [rbp-58h] BYREF
  int v25; // [rsp+14h] [rbp-54h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 480);
  v9 = *(_DWORD *)a3;
  v26 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(v8 + 112);
  if ( v9 > 9 )
  {
    if ( v9 != 56 )
      return 0;
    v16 = sub_183E40(v8, a3, a5, *(double *)a6.m128i_i64);
    if ( v16 < 0 )
      return 0;
    v17 = *(_QWORD *)(*(_QWORD *)(a3 + 72) + 24LL);
    if ( *(_BYTE *)v17 == 10 )
    {
      sub_125180((unsigned __int8 *)a1, *(unsigned __int8 **)(v17 + 8));
    }
    else if ( *(_BYTE *)v17 == 2 )
    {
      sub_1837D0(v11, a1, 2, *(_DWORD *)(v17 + 4), *(_QWORD *)(v17 + 8), *(double *)a6.m128i_i64);
    }
    else
    {
      sub_1838C0(a1, (__int64 *)v11, *(_QWORD *)(a3 + 24), nullptr, v17, v16);
    }
    *(_DWORD *)(a1 + 4) = v16;
  }
  else
  {
    if ( v9 > 7 )
    {
      if ( !a5 )
        return 0;
    }
    else
    {
      v12 = (__int64 (__fastcall *)(__int64, unsigned int))((v9 - 2) & 0xFFFFFFFD);
      if ( ((v9 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( v9 != 1 )
          return 0;
        if ( (_BYTE)a4 )
        {
          if ( *(_BYTE *)(a3 + 48) != 1 )
            return 0;
          v12 = sub_183350;
          v18 = *(unsigned int *)(a3 + 56);
          v19 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v11 + 256LL);
          if ( v19 != sub_183350 )
            LODWORD(v18) = ((__int64 (__fastcall *)(_QWORD, __int64, double))v19)(
                             *(_QWORD *)(v8 + 112),
                             v18,
                             *(double *)a6.m128i_i64);
          if ( (_DWORD)v18 != *(_DWORD *)(v11 + 52)
            && (_DWORD)v18 != *(_DWORD *)(v11 + 56)
            && (_DWORD)v18 != *(_DWORD *)(v11 + 64) )
          {
            return 0;
          }
        }
        v23 = *(_DWORD *)(a3 + 36);
        sub_123A40((__int64)v24, (unsigned __int8 *)(a3 + 64), (__int64)v12, a4);
        sub_183610(*(_QWORD *)(a2 + 480), (__int64)v24);
        if ( (unsigned __int8)sub_13C7E0(a2, a1, (int *)a3, a3 + 48, (__int64)v24, 0xFFFFFFFF, a6) )
        {
          *(_DWORD *)(a1 + 4) = v23;
          sub_11CDA0((__int64)v24);
          if ( *(_BYTE *)a1 == 2 )
            sub_1837D0(v11, a1, 2, *(_DWORD *)(a1 + 4), *(_QWORD *)(a1 + 8), *(double *)a6.m128i_i64);
          return 1;
        }
        sub_11CDA0((__int64)v24);
        sub_1838C0(
          a1,
          (__int64 *)v11,
          *(_QWORD *)(a3 + 24),
          (unsigned __int8 *)(a3 + 48),
          a3 + 64,
          *(_DWORD *)(a3 + 36));
        goto LABEL_13;
      }
    }
    if ( (_BYTE)a4 )
    {
      v15 = *(_BYTE *)(a3 + 64);
      if ( v15 > 6u )
      {
        if ( v15 != 9 )
          return 0;
      }
      else if ( v15 <= 3u )
      {
        return 0;
      }
    }
    sub_125180((unsigned __int8 *)a1, (unsigned __int8 *)(a3 + 64));
  }
LABEL_13:
  if ( *(_BYTE *)a1 == 4 )
  {
    if ( !(unsigned __int8)sub_1205A0(*(_BYTE **)(a1 + 8), v11, 0) )
    {
      if ( *(_BYTE *)a1 == 4 )
      {
        if ( (unsigned int)sub_15BC70(
                             *(unsigned int **)(a1 + 8),
                             (unsigned __int8 *)v11,
                             0,
                             0,
                             nullptr,
                             nullptr,
                             a6,
                             a7,
                             1u) )
        {
          v20 = *(_QWORD *)(a1 + 8);
          if ( *(_DWORD *)v20 == 2 && *(_BYTE *)(v20 + 48) == 10 )
          {
            sub_123A40((__int64)v24, *(unsigned __int8 **)(v20 + 56), v21, v22);
            v25 = *(_DWORD *)(a1 + 4);
            sub_11CA10((char *)a1, v24);
            sub_11CDA0((__int64)v24);
          }
        }
      }
      return 1;
    }
    return 0;
  }
  return 1;
}

