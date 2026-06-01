__int64 __fastcall sub_267810(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, int a6, double a7)
{
  _QWORD *v11; // rax
  unsigned int v14; // r11d
  unsigned int v15; // r13d
  int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // r14d
  __int64 v19; // rdi
  unsigned int v20; // r14d
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // r14
  __int64 v29; // rdi
  int v30; // r14d
  unsigned int v31; // r14d
  int v32; // r13d
  int v33; // r13d
  char *v34; // r8
  unsigned int v35; // eax
  int v36; // edx
  __int64 v37; // r13
  signed int v38; // r15d
  __int64 v39; // r13
  __int64 v40; // rdi
  int v41; // eax
  const char *v42; // rdx
  bool v43; // [rsp+7h] [rbp-61h]
  __int64 v44; // [rsp+10h] [rbp-58h] BYREF
  __int128 v45; // [rsp+18h] [rbp-50h]
  unsigned __int64 v46; // [rsp+28h] [rbp-40h]

  v11 = *(_QWORD **)a4;
  v46 = __readfsqword(0x28u);
  if ( ((unsigned __int8 (__fastcall *)(__int64))v11[1])(a4)
    || !(unsigned __int8)sub_267EB0(a1, a2, a3, a5, a6, *(_QWORD *)(a4 + 40)) )
  {
    return sub_2662B0(a1, a2, a3, (_QWORD **)a4, a5);
  }
  if ( *(_DWORD *)(a1 + 12) != -1 )
    sub_264E20(a1, a2, (_QWORD *)a4);
  v43 = sub_25F3C0(a1, *(_DWORD *)(a1 + 8), a5);
  if ( v43 )
  {
    v15 = a3 + 1;
    (**(void (__fastcall ***)(__int64, _QWORD, void *))a4)(a4, 0, &unk_41919E);
    v14 = *(_DWORD *)(a1 + 8);
    switch ( v14 )
    {
      case 1u:
        goto LABEL_19;
      case 0x10u:
        goto LABEL_17;
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
        goto LABEL_8;
      case 0x39u:
        goto LABEL_25;
      case 0x3Fu:
        goto LABEL_24;
      case 0x40u:
        goto LABEL_20;
      default:
        goto LABEL_14;
    }
  }
  v15 = a3;
  switch ( v14 )
  {
    case 1u:
LABEL_19:
      v23 = sub_267810(*(_QWORD *)(a1 + 24), a2, v15, a4, a1, 1u);
      sub_262740((void **)a1, a2, v23, 0, ",", (_QWORD *)a4, 0);
      sub_2630C0((_QWORD *)a1, a4, v15, 1u, a7);
      (**(void (__fastcall ***)(__int64, _QWORD, void *))a4)(a4, v15, &unk_418793);
      sub_2655A0((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a4);
      goto LABEL_11;
    case 0x10u:
LABEL_17:
      v20 = v15 - 2;
      v21 = sub_267810(*(_QWORD *)(a1 + 24), a2, v15, a4, a1, 0x10u);
      sub_262740(*(void ***)(a1 + 32), a2, v21, 0, (char *)&unk_418793, (_QWORD *)a4, 0);
      sub_2630C0(*(_QWORD **)(a1 + 32), a4, v15 - 2, 1u, a7);
      if ( (unsigned int)sub_2622C0(
                           a1,
                           v15 - 2,
                           (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4,
                           1u) != v15 )
      {
        if ( !under_debugger )
          sub_383060(0xCD79u, a7);
LABEL_38:
        BUG();
      }
      v22 = sub_267810(*(_QWORD *)(a1 + 32), a2, v15, a4, a1, *(_DWORD *)(a1 + 8));
      sub_262740(*(void ***)(a1 + 40), a2, v22, 0, (char *)&unk_418793, (_QWORD *)a4, 0);
      sub_2630C0(*(_QWORD **)(a1 + 40), a4, v20, 1u, a7);
      (**(void (__fastcall ***)(__int64, _QWORD, void *))a4)(a4, v20, &unk_4191BC);
      v19 = *(_QWORD *)(a1 + 40);
LABEL_12:
      v15 = sub_267810(v19, a2, v15, a4, a1, *(_DWORD *)(a1 + 8));
LABEL_13:
      if ( v43 )
      {
LABEL_14:
        ++v15;
        (**(void (__fastcall ***)(__int64, _QWORD, char *))a4)(a4, 0, byte_419175);
      }
      return v15;
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x23u:
    case 0x24u:
    case 0x25u:
    case 0x26u:
    case 0x27u:
    case 0x28u:
    case 0x29u:
    case 0x2Au:
    case 0x2Bu:
    case 0x2Cu:
    case 0x2Du:
LABEL_8:
      v16 = sub_267810(*(_QWORD *)(a1 + 24), a2, v15, a4, a1, v14);
      v17 = 0;
      if ( *(_BYTE *)(a4 + 48) == 41 )
        v17 = 72;
      sub_262740((void **)a1, a2, v16, 0, (char *)&unk_418793, (_QWORD *)a4, v17);
      v18 = v15 - 1 - strlen((const char *)*(&off_4E0320 + 2 * *(int *)(a1 + 8)));
      sub_2630C0((_QWORD *)a1, a4, v18, 1u, a7);
      if ( (unsigned int)sub_2622C0(
                           a1,
                           v18,
                           (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4,
                           1u) == v15 )
      {
LABEL_11:
        v19 = *(_QWORD *)(a1 + 32);
        goto LABEL_12;
      }
      if ( !under_debugger )
        sub_383060(0xC3CAu, a7);
      goto LABEL_38;
    case 0x39u:
LABEL_25:
      v29 = *(_QWORD *)(a1 + 24);
      v30 = *(_DWORD *)(a2 + 592);
      v44 = -1;
      *(_QWORD *)&v45 = 0xFFFFFFFF00000002LL;
      v31 = v15 + v30;
      DWORD2(v45) = -1;
      v32 = sub_267810(v29, a2, v15, a4, a1, 0);
      v33 = sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0) + v32;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) )
      {
        v34 = (char *)&unk_418793;
        v35 = 65;
        v36 = v33;
        v37 = 0;
        v38 = 0;
        do
        {
          ++v38;
          v39 = 72 * v37;
          sub_262740((void **)a1, a2, v36, 0, v34, (_QWORD *)a4, v35);
          sub_2630C0((_QWORD *)(v39 + **(_QWORD **)(a1 + 32)), a4, v31, 1u, a7);
          (**(void (__fastcall ***)(__int64, _QWORD, void *))a4)(a4, v31, &unk_418793);
          v40 = v39 + **(_QWORD **)(a1 + 32);
          v37 = v38;
          v41 = sub_267810(v40, a2, v31, a4, (__int64)&v44, 0);
          v34 = byte_4191CA;
          v36 = v41;
          v35 = v38;
        }
        while ( (unsigned __int64)v38 < *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) );
        v33 = v36;
      }
      v15 = v33 + 1;
      (**(void (__fastcall ***)(__int64, _QWORD, char *))a4)(a4, 0, byte_419175);
      goto LABEL_13;
    case 0x3Fu:
LABEL_24:
      sub_262CE0((void **)a1, a2, *(const char **)(a1 + 24), 1, v15, (_QWORD *)a4, a7);
      goto LABEL_13;
    case 0x40u:
LABEL_20:
      v24 = *(_QWORD *)(a4 + 40);
      v25 = *(_QWORD *)(a1 + 24);
      v44 = 0;
      v26 = *(_QWORD *)(v24 + 216);
      v45 = 0;
      v27 = sub_261BF0(*(_QWORD *)(v26 + 112), &v44, v25, 0, nullptr);
      v28 = v44;
      if ( !v27 )
      {
        if ( v44 )
          qfree(v44);
        a3 = v15;
        return sub_2662B0(a1, a2, a3, (_QWORD **)a4, a5);
      }
      v42 = (const char *)v44;
      if ( !(_QWORD)v45 )
        v42 = s1;
      sub_262CE0((void **)a1, a2, v42, v27, v15, (_QWORD *)a4, 0.0);
      if ( v28 )
        qfree(v28);
      goto LABEL_13;
    default:
      return v15;
  }
}

