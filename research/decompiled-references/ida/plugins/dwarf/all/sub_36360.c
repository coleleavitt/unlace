__int64 __fastcall sub_36360(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // dl
  __int64 result; // rax
  __int64 v5; // rdi
  int v6; // r12d
  int v7; // ebp
  __int64 *v8; // rax
  int v9; // r8d
  int v10; // r9d
  const char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  unsigned __int8 v16; // dl
  const char *v17; // rbp
  __int64 *v18; // rax
  __int64 *v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  const char *v23; // rsi
  __m128i v24; // xmm0
  bool v25; // zf
  int tinfo_property; // eax
  int v27; // ecx
  __int64 v28; // r12
  __int64 v29; // r14
  int v30; // r13d
  __int64 v31; // rbp
  __int64 *v32; // rax
  const char *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // rax
  _QWORD v38[7]; // [rsp+0h] [rbp-38h] BYREF

  v38[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 88);
  v3 = *(_BYTE *)(v2 + 142);
  result = *(unsigned __int8 *)(a1 + 142);
  if ( v3 != (_BYTE)result )
  {
    result = 0;
    if ( v3 )
    {
      if ( v3 != 5 )
      {
        if ( *(_QWORD *)(a1 + 160) )
        {
          if ( (get_tinfo_property(*(_QWORD *)(a1 + 8), 2) & 0xF) != 0xE )
          {
            if ( !*(_DWORD *)(a1 + 136) )
              sub_345A0(a1, *(_DWORD *)(*(_QWORD *)(a1 + 88) + 136LL));
            v5 = *(unsigned __int16 *)(a1 + 144);
            if ( (_WORD)v5 == 12 )
            {
              sub_350A0(*(_QWORD *)(a1 + 88), a1 + 8);
              *(__m128 *)(a1 + 176) = _mm_loadh_ps((const double *)(a1 + 160));
            }
            else
            {
              if ( (_WORD)v5 != 107 )
              {
                (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 144LL) + 88LL)
                                                          + 544LL))(
                  v5,
                  v38);
                if ( (debug & 0x400000) != 0 )
                {
                  v6 = *(unsigned __int16 *)(a1 + 144);
                  v7 = v38[0];
                  v8 = sub_34340(a1);
                  v11 = src;
                  if ( v8[1] )
                    v11 = (const char *)*v8;
                  sub_88B80(
                    (unsigned int)"Warning structure member DIE %s unimplemented bitfield attribute %s (0x%x)\n",
                    (_DWORD)v11,
                    v7,
                    v6,
                    v9,
                    v10);
                }
                return 5;
              }
              sub_350A0(*(_QWORD *)(a1 + 88), a1 + 8);
              v24 = _mm_loadu_si128((const __m128i *)(a1 + 152));
              v25 = *(_QWORD *)(a1 + 168) == -1;
              *(__m128i *)(a1 + 176) = v24;
              if ( v25 )
                *(_QWORD *)(a1 + 168) = (unsigned __int64)v24.m128i_i64[0] >> 3;
            }
            tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 8), 3);
            v27 = *(_DWORD *)(a1 + 136);
            BYTE1(v38[0]) = *(_QWORD *)(a1 + 160);
            LOBYTE(v38[0]) = v27;
            BYTE2(v38[0]) = tinfo_property == 2;
            if ( !(unsigned __int8)create_tinfo(a1 + 8, 14, 14, v38) )
            {
              if ( (debug & 0x400000) != 0 )
              {
                v28 = *(_QWORD *)(a1 + 168);
                v29 = *(_QWORD *)(a1 + 184);
                v30 = *(_DWORD *)(a1 + 136);
                v31 = *(_QWORD *)(a1 + 176) - 8 * v28;
                v32 = sub_34340(a1);
                v33 = src;
                if ( v32[1] )
                  v33 = (const char *)*v32;
                sub_88B80(
                  (unsigned int)"Error structure member DIE %s creating bitfield container offset(0x%llx)/container size("
                                "0x%x)/bit offset(0x%llx)/bit size(0x%llx)\n",
                  (_DWORD)v33,
                  v28,
                  v30,
                  v31,
                  v29);
              }
              return 5;
            }
            v38[0] = 0x362103F98AB6B0F5LL;
            v34 = sub_856E0(v38, a1 + 64);
            v35 = sub_856B0(v34, *(_QWORD *)(a1 + 176));
            v36 = sub_856B0(v35, *(_QWORD *)(a1 + 184));
            v37 = (__int64 *)sub_856E0(v36, *(_QWORD *)(a1 + 88) + 72LL);
            sub_349E0(a1, v37);
          }
          return 3;
        }
        if ( !(unsigned __int8)sub_350A0(v2, a1 + 8) )
        {
          if ( (debug & 0x400000) != 0 )
          {
            v17 = src;
            v18 = sub_34340(*(_QWORD *)(a1 + 88));
            if ( v18[1] )
              v17 = (const char *)*v18;
            v19 = sub_34340(a1);
            v23 = src;
            if ( v19[1] )
              v23 = (const char *)*v19;
            sub_88B80(
              (unsigned int)"Error complex member DIE %s propagating DIE %s type information\n",
              (_DWORD)v23,
              (_DWORD)v17,
              v20,
              v21,
              v22);
          }
          return 5;
        }
        sub_345A0(a1, *(_DWORD *)(*(_QWORD *)(a1 + 88) + 136LL));
        *(_BYTE *)(a1 + 143) = *(_BYTE *)(*(_QWORD *)(a1 + 88) + 143LL) & 1 | *(_BYTE *)(a1 + 143) & 0xFE;
        *(_QWORD *)(a1 + 176) = 8LL * *(_QWORD *)(a1 + 168);
        *(_QWORD *)(a1 + 184) = (unsigned int)(8 * *(_DWORD *)(a1 + 136));
        v38[0] = 0x8A90F7571166FECDLL;
        v12 = sub_856E0(v38, a1 + 64);
        v13 = sub_856B0(v12, *(_QWORD *)(a1 + 176));
        v14 = sub_856B0(v13, *(_QWORD *)(a1 + 184));
        v15 = (__int64 *)sub_856E0(v14, *(_QWORD *)(a1 + 88) + 72LL);
        sub_349E0(a1, v15);
        v16 = *(_BYTE *)(*(_QWORD *)(a1 + 88) + 142LL);
        if ( v16 <= 2u )
        {
          result = 1;
          if ( v16 )
            return result;
        }
        else if ( (unsigned __int8)(v16 - 3) <= 1u )
        {
          return 3;
        }
      }
      return 5;
    }
  }
  return result;
}

