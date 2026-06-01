__int64 __fastcall sub_2903F0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int v10; // r15d
  char tinfo_property; // al
  int v13; // eax
  unsigned int v14; // r9d
  __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int16 v19; // r9
  int v20; // r10d
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  int v23; // eax
  int v24; // r10d
  __int64 v25; // rdi
  unsigned __int8 v26; // dl
  unsigned int v27; // r12d
  int v28; // eax
  char v29; // al
  int v30; // eax
  int v31; // r8d
  int v32; // eax
  __int64 v33; // rax
  int v34; // [rsp+0h] [rbp-98h]
  int tinfo_size; // [rsp+Ch] [rbp-8Ch]
  unsigned __int8 v36; // [rsp+Ch] [rbp-8Ch]
  int v37; // [rsp+10h] [rbp-88h]
  int v38; // [rsp+18h] [rbp-80h]
  int v39; // [rsp+18h] [rbp-80h]
  int v40; // [rsp+20h] [rbp-78h]
  int v41; // [rsp+20h] [rbp-78h]
  __int16 v42; // [rsp+20h] [rbp-78h]
  int v43; // [rsp+30h] [rbp-68h]
  int v44; // [rsp+38h] [rbp-60h]
  __int16 v45; // [rsp+38h] [rbp-60h]
  unsigned __int8 v46; // [rsp+3Fh] [rbp-59h]
  int v47; // [rsp+4Ch] [rbp-4Ch] BYREF
  _QWORD v48[9]; // [rsp+50h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 16);
  v48[1] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v5 + 8 * v4 - 8);
  if ( !sub_256450(a2, v7, *(double *)a3.m128_u64) )
  {
    if ( !under_debugger )
      sub_383060(0xC5C0u, *(double *)a3.m128_u64);
LABEL_66:
    BUG();
  }
  if ( *(_DWORD *)(a2 + 8) != 48 )
  {
    if ( !under_debugger )
      sub_383060(0xC5C1u, *(double *)a3.m128_u64);
    goto LABEL_66;
  }
  v8 = *(int *)(v7 + 8);
  v9 = *(_QWORD *)(a2 + 24);
  if ( (_DWORD)v8 == 16 )
  {
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
      return 0;
    v8 = *(int *)(v7 + 8);
  }
  if ( (unsigned int)v8 <= 0x45 && (*((_BYTE *)&off_4E0320 + 16 * v8 + 11) & 0x20) != 0 )
  {
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0x3E) != 0
      && ((tinfo_property & 0xFu) <= 8 || (tinfo_property & 0x3F) == 0x2D)
      && (*(_BYTE *)(a2 + 48) & 0xFu) <= 9 )
    {
      tinfo_size = get_tinfo_size();
      v13 = get_tinfo_size();
      v34 = v13;
      LOBYTE(v14) = v13 == -1 || tinfo_size == -1;
      v10 = v14;
      if ( !(_BYTE)v14 )
      {
        v15 = *(_QWORD *)(v7 + 24);
        if ( a2 == v15 )
          v15 = *(_QWORD *)(v7 + 32);
        v40 = v13;
        v37 = get_tinfo_size();
        if ( v37 != -1 )
        {
          v43 = get_tinfo_property();
          v16 = sub_285970(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), *(double *)a3.m128_u64);
          v17 = *(_QWORD *)(a1 + 72);
          v47 = v16;
          sub_285650((__int16 *)&v47, v17, v9 + 48, v34);
          v18 = *(unsigned int *)(v7 + 8);
          v19 = v47;
          v48[0] = 0;
          v20 = v40;
          if ( ((_DWORD)v18 == 36 || (unsigned int)v18 <= 0x2C && (v21 = 0x142800F80000LL, _bittest64(&v21, v18)))
            && (v22 = *(_QWORD *)(a1 + 24), v22 > 1)
            && (v45 = v47,
                v29 = sub_284660(
                        (unsigned int)v48,
                        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL),
                        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v22 - 16),
                        v7,
                        *(double *)a3.m128_u64),
                v20 = v40,
                v19 = v45,
                v29) )
          {
            v30 = get_tinfo_size();
            if ( v30 == -1 )
              goto LABEL_32;
            v20 = v40;
            v31 = v37;
            v19 = v45;
            if ( v30 <= v37 )
              v31 = v30;
            v37 = v31;
            if ( v40 < v30 )
              goto LABEL_32;
          }
          else if ( v19 > 8 * v20 )
          {
            v42 = v19;
            v39 = v20;
            v28 = sub_284430(a1, a2, 0x7FFFFFFFu, 0, *(double *)a3.m128_u64);
            v20 = v39;
            v19 = v42;
            if ( v28 > v39 )
              goto LABEL_32;
          }
          if ( v37 < v20 )
            goto LABEL_32;
          v44 = v19;
          v41 = v20;
          v46 = v19 >= 8 * v20;
          v38 = 8 * v20;
          v23 = sub_2862C0(a1, a2, tinfo_size, v46, 0, *(double *)a3.m128_u64);
          if ( v23 == 2 )
            goto LABEL_32;
          v24 = v41;
          if ( v23 != 1 )
            goto LABEL_28;
          v25 = *(_QWORD *)(a1 + 72);
          v26 = *(_BYTE *)(v25 + 130);
          if ( v37 <= v41 )
          {
            v32 = v26;
            if ( v26 <= v41 || !v46 )
            {
              if ( *(_DWORD *)(v15 + 8) == 61 && (unsigned int)(*(_DWORD *)(v7 + 8) - 22) <= 9 )
                goto LABEL_32;
              goto LABEL_46;
            }
          }
          else if ( v44 < v38 )
          {
            if ( *(_DWORD *)(v15 + 8) == 61 && (unsigned int)(*(_DWORD *)(v7 + 8) - 22) <= 9 )
              goto LABEL_32;
LABEL_27:
            if ( !(unsigned __int8)sub_27EA20(v25, (_QWORD *)(v15 + 48), (_QWORD *)(v9 + 48), a2 + 48, 0) )
              goto LABEL_28;
LABEL_32:
            clear_tinfo_t();
            return v10;
          }
          v36 = *(_BYTE *)(v25 + 130);
          if ( v43 == 1 )
            goto LABEL_32;
          if ( v43 != (unsigned int)get_tinfo_property() )
            goto LABEL_32;
          v24 = v41;
          if ( *(_DWORD *)(v15 + 8) == 61 && (unsigned int)(*(_DWORD *)(v7 + 8) - 22) <= 9 )
            goto LABEL_32;
          if ( v37 != v41 )
          {
LABEL_47:
            v25 = *(_QWORD *)(a1 + 72);
            goto LABEL_27;
          }
          v32 = v36;
LABEL_46:
          if ( v24 < v32 )
          {
            v33 = *(_QWORD *)(a2 + 24);
            if ( *(_DWORD *)(v33 + 8) == 61 && sub_255A30(*(__int64 **)(v33 + 24)) >= 0 )
            {
LABEL_28:
              v27 = sub_28FF70(a1, a2, a2, *(double *)a3.m128_u64);
              if ( (_BYTE)v27 )
              {
                sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), *(double *)a3.m128_u64);
                if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
                  *(_DWORD *)(a1 + 8) |= 8u;
                v10 = v27;
              }
              goto LABEL_32;
            }
          }
          goto LABEL_47;
        }
      }
    }
  }
  return 0;
}

