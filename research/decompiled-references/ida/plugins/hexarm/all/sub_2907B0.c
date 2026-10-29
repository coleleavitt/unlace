__int64 __fastcall sub_2907B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned int v9; // r15d
  char tinfo_property; // al
  int v12; // eax
  unsigned int v13; // r9d
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int16 v18; // r9
  int v19; // r10d
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  int v22; // eax
  int v23; // r10d
  __int64 v24; // rdi
  unsigned __int8 v25; // dl
  unsigned int v26; // r12d
  int v27; // eax
  char v28; // al
  int v29; // eax
  int v30; // r8d
  int v31; // eax
  __int64 v32; // rax
  int v33; // [rsp+0h] [rbp-98h]
  int tinfo_size; // [rsp+Ch] [rbp-8Ch]
  unsigned __int8 v35; // [rsp+Ch] [rbp-8Ch]
  int v36; // [rsp+10h] [rbp-88h]
  int v37; // [rsp+18h] [rbp-80h]
  int v38; // [rsp+18h] [rbp-80h]
  int v39; // [rsp+20h] [rbp-78h]
  int v40; // [rsp+20h] [rbp-78h]
  __int16 v41; // [rsp+20h] [rbp-78h]
  int v42; // [rsp+30h] [rbp-68h]
  int v43; // [rsp+38h] [rbp-60h]
  __int16 v44; // [rsp+38h] [rbp-60h]
  unsigned __int8 v45; // [rsp+3Fh] [rbp-59h]
  int v46; // [rsp+4Ch] [rbp-4Ch] BYREF
  _QWORD v47[9]; // [rsp+50h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  v47[1] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v4 + 8 * v3 - 8);
  if ( !sub_256810(a2, v6) )
  {
    if ( !under_debugger )
      sub_3835A0(50624);
LABEL_66:
    BUG();
  }
  if ( *(_DWORD *)(a2 + 8) != 48 )
  {
    if ( !under_debugger )
      sub_3835A0(50625);
    goto LABEL_66;
  }
  v7 = *(int *)(v6 + 8);
  v8 = *(_QWORD *)(a2 + 24);
  if ( (_DWORD)v7 == 16 )
  {
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
      return 0;
    v7 = *(int *)(v6 + 8);
  }
  if ( (unsigned int)v7 <= 0x45 && (*((_BYTE *)&off_4DA9E0 + 16 * v7 + 11) & 0x20) != 0 )
  {
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0x3E) != 0
      && ((tinfo_property & 0xFu) <= 8 || (tinfo_property & 0x3F) == 0x2D)
      && (*(_BYTE *)(a2 + 48) & 0xFu) <= 9 )
    {
      tinfo_size = get_tinfo_size();
      v12 = get_tinfo_size();
      v33 = v12;
      LOBYTE(v13) = v12 == -1 || tinfo_size == -1;
      v9 = v13;
      if ( !(_BYTE)v13 )
      {
        v14 = *(_QWORD *)(v6 + 24);
        if ( a2 == v14 )
          v14 = *(_QWORD *)(v6 + 32);
        v39 = v12;
        v36 = get_tinfo_size();
        if ( v36 != -1 )
        {
          v42 = get_tinfo_property();
          v15 = sub_285D30(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
          v16 = *(_QWORD *)(a1 + 72);
          v46 = v15;
          sub_285A10((__int16 *)&v46, v16, v8 + 48, v33);
          v17 = *(unsigned int *)(v6 + 8);
          v18 = v46;
          v47[0] = 0;
          v19 = v39;
          if ( ((_DWORD)v17 == 36 || (unsigned int)v17 <= 0x2C && (v20 = 0x142800F80000LL, _bittest64(&v20, v17)))
            && (v21 = *(_QWORD *)(a1 + 24), v21 > 1)
            && (v44 = v46,
                v28 = sub_284A20(
                        (unsigned int)v47,
                        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL),
                        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v21 - 16),
                        v6),
                v19 = v39,
                v18 = v44,
                v28) )
          {
            v29 = get_tinfo_size();
            if ( v29 == -1 )
              goto LABEL_32;
            v19 = v39;
            v30 = v36;
            v18 = v44;
            if ( v29 <= v36 )
              v30 = v29;
            v36 = v30;
            if ( v39 < v29 )
              goto LABEL_32;
          }
          else if ( v18 > 8 * v19 )
          {
            v41 = v18;
            v38 = v19;
            v27 = sub_2847F0(a1, a2, 0x7FFFFFFFu, 0);
            v19 = v38;
            v18 = v41;
            if ( v27 > v38 )
              goto LABEL_32;
          }
          if ( v36 < v19 )
            goto LABEL_32;
          v43 = v18;
          v40 = v19;
          v45 = v18 >= 8 * v19;
          v37 = 8 * v19;
          v22 = sub_286680(a1, a2, tinfo_size, v45, 0);
          if ( v22 == 2 )
            goto LABEL_32;
          v23 = v40;
          if ( v22 != 1 )
            goto LABEL_28;
          v24 = *(_QWORD *)(a1 + 72);
          v25 = *(_BYTE *)(v24 + 130);
          if ( v36 <= v40 )
          {
            v31 = v25;
            if ( v25 <= v40 || !v45 )
            {
              if ( *(_DWORD *)(v14 + 8) == 61 && (unsigned int)(*(_DWORD *)(v6 + 8) - 22) <= 9 )
                goto LABEL_32;
              goto LABEL_46;
            }
          }
          else if ( v43 < v37 )
          {
            if ( *(_DWORD *)(v14 + 8) == 61 && (unsigned int)(*(_DWORD *)(v6 + 8) - 22) <= 9 )
              goto LABEL_32;
LABEL_27:
            if ( !(unsigned __int8)sub_27EDE0(v24, v14 + 48, v8 + 48, a2 + 48, 0) )
              goto LABEL_28;
LABEL_32:
            clear_tinfo_t();
            return v9;
          }
          v35 = *(_BYTE *)(v24 + 130);
          if ( v42 == 1 )
            goto LABEL_32;
          if ( v42 != (unsigned int)get_tinfo_property() )
            goto LABEL_32;
          v23 = v40;
          if ( *(_DWORD *)(v14 + 8) == 61 && (unsigned int)(*(_DWORD *)(v6 + 8) - 22) <= 9 )
            goto LABEL_32;
          if ( v36 != v40 )
          {
LABEL_47:
            v24 = *(_QWORD *)(a1 + 72);
            goto LABEL_27;
          }
          v31 = v35;
LABEL_46:
          if ( v23 < v31 )
          {
            v32 = *(_QWORD *)(a2 + 24);
            if ( *(_DWORD *)(v32 + 8) == 61 && sub_255DF0(*(__int64 **)(v32 + 24)) >= 0 )
            {
LABEL_28:
              v26 = sub_290330(a1, a2, a2);
              if ( (_BYTE)v26 )
              {
                sub_255C10((__int64 *)a2, *(_QWORD *)(a2 + 24));
                if ( (unsigned __int8)sub_283EC0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
                  *(_DWORD *)(a1 + 8) |= 8u;
                v9 = v26;
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

