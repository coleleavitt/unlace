__int64 __fastcall sub_268570(__int64 a1, unsigned int a2, _QWORD *a3, unsigned int a4, double a5)
{
  __int64 v9; // rax
  __int64 module_data; // r12
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  int v16; // eax
  int v17; // edx
  unsigned int v18; // edx
  __int64 v19; // rdi
  _QWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 *v23; // rax
  double v24; // xmm0_8
  int v25; // eax
  int v26; // edx
  int v27; // r13d
  unsigned __int64 v28; // rax
  int v29; // r13d
  unsigned int v30; // eax
  int v31; // eax
  int v32; // eax
  double v33; // xmm0_8
  int v34; // eax
  double v35; // xmm0_8
  int v36; // eax
  __int64 v37; // r14
  int v38; // edx
  __int64 v39; // r13
  __int64 v40; // rdx
  bool v41; // zf
  __int64 v42; // rdi
  double v43; // xmm0_8
  int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rsi
  char v48; // [rsp+18h] [rbp-70h]
  unsigned int v49; // [rsp+18h] [rbp-70h]
  unsigned int v50; // [rsp+18h] [rbp-70h]
  unsigned int v51; // [rsp+18h] [rbp-70h]
  char v52; // [rsp+1Ch] [rbp-6Ch]
  __int64 v53; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v54; // [rsp+30h] [rbp-58h] BYREF
  int v55; // [rsp+38h] [rbp-50h]
  unsigned __int64 v56; // [rsp+48h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  while ( 2 )
  {
    v9 = a3[5];
    if ( v9 )
      module_data = *(_QWORD *)(v9 + 216);
    else
      module_data = get_module_data();
    if ( *(_DWORD *)(a1 + 12) != -1 )
      sub_264E20(a1, module_data, a3);
    if ( *(_DWORD *)(a1 + 8) != 71 )
    {
      if ( (a2 & 0x80000000) != 0 )
      {
LABEL_10:
        v48 = 0;
        goto LABEL_11;
      }
LABEL_8:
      sub_2630C0((_QWORD *)a1, (__int64)a3, a2, 1u, a5);
LABEL_9:
      sub_2656E0((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a3);
      goto LABEL_10;
    }
    v48 = a4 == 2;
    if ( !a4 )
      v48 = sub_261240(*(_QWORD *)(a1 + 24), module_data, a5);
    v14 = a3[5];
    if ( v14 )
    {
      if ( a1 )
      {
        v15 = *(_QWORD *)a1;
        v16 = *(_DWORD *)(a1 + 8);
      }
      else
      {
        v15 = -1;
        v16 = 0;
      }
      v54 = v15;
      v55 = v16;
      v52 = sub_257EA0(v14, &v54);
      if ( (get_merge_state() & 3) == 0 && (v52 & 1) != 0 )
      {
        if ( (a2 & 0x80000000) != 0 )
          goto LABEL_10;
        if ( *(_DWORD *)(a1 + 8) == 71 )
          goto LABEL_9;
        goto LABEL_8;
      }
    }
    if ( (a2 & 0x80000000) == 0 )
    {
      if ( *(_DWORD *)(a1 + 8) != 71 )
        sub_2630C0((_QWORD *)a1, (__int64)a3, a2, 1u, a5);
      if ( !v48 )
        goto LABEL_9;
    }
LABEL_11:
    v11 = sub_269460(a1, module_data, a2, a3);
    v12 = v11;
    if ( !v11 )
    {
      switch ( *(_DWORD *)(a1 + 8) )
      {
        case 'F':
          sub_262740((void **)a1, module_data, 0, a2, byte_419246, a3, 0x45u);
          return v56 - __readfsqword(0x28u);
        case 'G':
          return sub_269750(*(_QWORD **)(a1 + 24), (void **)a1, a2, a3, v48);
        case 'H':
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_418793);
          v19 = *(_QWORD *)(a1 + 24);
          v20 = a3;
          v18 = a2;
          goto LABEL_41;
        case 'I':
          if ( (a2 & 0x80000000) != 0 )
          {
            v45 = 10 - a2;
            a2 = -a2;
            v49 = v45;
          }
          else
          {
            v12 = a2;
            v49 = a2 + 5;
          }
          a5 = (*(double (__fastcall **)(_QWORD *, __int64, const char *))*a3)(a3, v12, &byte_42C488);
          v21 = sub_267810(*(_QWORD *)(a1 + 24), module_data, v49, (__int64)a3, 0, 0, a5);
          sub_262740((void **)a1, module_data, v21, 1u, byte_419175, a3, 0x48u);
          sub_268570(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL), a2 + *(_DWORD *)(module_data + 592), a3, a4);
          v22 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL);
          if ( !v22 )
            return v56 - __readfsqword(0x28u);
          if ( *(_DWORD *)(v22 + 8) == 71
            && (v23 = *(__int64 **)(v22 + 24), v23[2] == 1)
            && (v46 = *v23, *(_QWORD *)(v46 + 24) == -4294967223LL) )
          {
            a1 = v46 + 16;
            if ( *(_BYTE *)(module_data + 719) )
              sub_262740((void **)(v46 + 16), module_data, 0, 0, (char *)&unk_418793, a3, 0);
            sub_2630C0((_QWORD *)a1, (__int64)a3, a2, 1u, a5);
            sub_2656E0((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a3);
            v47 = a2;
            a2 = -a2;
            (*(void (__fastcall **)(_QWORD *, __int64, void *))*a3)(a3, v47, &unk_419210);
          }
          else
          {
            sub_262740((void **)a1, module_data, 0, a2, (char *)&byte_42C478, a3, 0x43u);
            a2 += *(_DWORD *)(module_data + 592);
            a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL);
          }
          continue;
        case 'J':
          v24 = (*(double (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_41921A);
          v50 = a2 + 6;
          v25 = sub_267810(*(_QWORD *)(a1 + 24) + 72LL, module_data, a2 + 6, (__int64)a3, 0, 0, v24);
          v26 = *(_DWORD *)(module_data + 600);
          v27 = v25;
          if ( v26 <= v25
            || (unsigned __int8)sub_267DE0(*(_QWORD *)(a1 + 24), module_data, v26 - v25, a3[5], &v53)
            || (v28 = *(int *)(module_data + 600), v53 + v27 >= v28)
            || (unsigned __int8)sub_267DE0(
                                  *(_QWORD *)(a1 + 24) + 136LL,
                                  module_data,
                                  (int)v28 - v27 - v53,
                                  a3[5],
                                  nullptr) )
          {
            sub_262740((void **)(*(_QWORD *)(a1 + 24) + 72LL), module_data, v27, 0, byte_419246, a3, 0x45u);
            sub_2630C0(*(_QWORD **)(a1 + 24), (__int64)a3, v50, 1u, v24);
            v43 = (*(double (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, v50, &unk_418793);
            v44 = sub_267810(*(_QWORD *)(a1 + 24), module_data, v50, (__int64)a3, 0, 0, v43);
            sub_262740(*(void ***)(a1 + 24), module_data, v44, 0, byte_419246, a3, 0x45u);
            sub_2630C0((_QWORD *)(*(_QWORD *)(a1 + 24) + 136LL), (__int64)a3, v50, 1u, v43);
            a4 = 2;
            a5 = (*(double (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, v50, &unk_418793);
            v31 = sub_267810(*(_QWORD *)(a1 + 24) + 136LL, module_data, v50, (__int64)a3, 0, 0, a5);
          }
          else
          {
            a5 = (*(double (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, 0, &unk_419229);
            v29 = sub_267810(*(_QWORD *)(a1 + 24), module_data, v27 + 2, (__int64)a3, 0, 0, a5);
            (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, 0, &unk_419229);
            v30 = v29 + 2;
            a4 = 0;
            v31 = sub_267810(*(_QWORD *)(a1 + 24) + 136LL, module_data, v30, (__int64)a3, 0, 0, a5);
          }
          sub_262740((void **)a1, module_data, v31, 1u, byte_419175, a3, 0x48u);
          a2 += *(_DWORD *)(module_data + 592);
          a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
          continue;
        case 'K':
          a4 = 0;
          a5 = (*(double (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_419230);
          v32 = sub_267810(*(_QWORD *)(a1 + 24), module_data, a2 + 8, (__int64)a3, 0, 0, a5);
          sub_262740((void **)a1, module_data, v32, 1u, byte_419175, a3, 0x48u);
          a2 += *(_DWORD *)(module_data + 592);
          a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
          continue;
        case 'L':
          sub_262740((void **)a1, module_data, 0, a2, byte_42C471, a3, 0x44u);
          sub_268570(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL), a2 + *(_DWORD *)(module_data + 592), a3, 0);
          sub_2656E0((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a3);
          v33 = (*(double (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_419230);
          v34 = sub_267810(*(_QWORD *)(a1 + 24), module_data, a2 + 8, (__int64)a3, 0, 0, v33);
          sub_262740((void **)a1, module_data, v34, 1u, byte_419241, a3, 0x45u);
          return v56 - __readfsqword(0x28u);
        case 'M':
          v35 = (*(double (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_41924C);
          v36 = sub_267810(*(_QWORD *)(a1 + 24), module_data, a2 + 9, (__int64)a3, 0, 0, v35);
          sub_262740((void **)a1, module_data, v36, 1u, byte_419175, a3, 0x48u);
          sub_262740((void **)a1, module_data, 0, a2, byte_42C4A8, a3, 0x46u);
          v37 = *(_QWORD *)(a1 + 24);
          v38 = *(_DWORD *)(module_data + 592);
          v39 = *(_QWORD *)(v37 + 112);
          v51 = v38 + a2;
          if ( 56LL * *(_QWORD *)(v37 + 120) )
          {
            v40 = *(_QWORD *)(v37 + 112);
            do
            {
              v41 = v40 == v39;
              v42 = v39;
              v39 += 56;
              sub_269130(v42, module_data, a1, v51, a3, *(_BYTE *)(module_data + 719) & !v41);
              v40 = *(_QWORD *)(v37 + 112);
            }
            while ( v39 != v40 + 56LL * *(_QWORD *)(v37 + 120) );
            v38 = *(_DWORD *)(module_data + 592);
          }
          sub_2630C0((_QWORD *)a1, (__int64)a3, a2 + 2 * v38, 0, v35);
          sub_262740((void **)a1, module_data, 0, a2, byte_42C4A0, a3, 0x47u);
          return v56 - __readfsqword(0x28u);
        case 'N':
          sub_262740((void **)a1, module_data, 0, a2, byte_419273, a3, 0x45u);
          return v56 - __readfsqword(0x28u);
        case 'O':
          sub_262740((void **)a1, module_data, 0, a2, byte_419282, a3, 0x45u);
          return v56 - __readfsqword(0x28u);
        case 'P':
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_41925E);
          v17 = a2 + 6;
          if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
            goto LABEL_42;
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, 0, &unk_419206);
          v18 = a2 + 7;
          break;
        case 'Q':
          return sub_264F70(*(signed int **)(a1 + 24), (void **)a1, a2, a3);
        case 'R':
          return sub_265320(*(_QWORD *)(a1 + 24), (void **)a1, a2, a3);
        case 'S':
          return sub_268480(*(_QWORD *)(a1 + 24), (void **)a1, a2, a3);
        case 'T':
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_419269);
          v17 = a2 + 5;
          if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
            goto LABEL_42;
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, 0, &unk_419206);
          v18 = a2 + 6;
          break;
        default:
          return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, const char *))*a3)(a3, a2, "???");
      }
      v19 = *(_QWORD *)(a1 + 24);
      v20 = a3;
LABEL_41:
      v17 = sub_267810(v19, module_data, v18, (__int64)v20, 0, 0, a5);
LABEL_42:
      sub_262740((void **)a1, module_data, v17, 0, byte_419246, a3, 0x45u);
    }
    return v56 - __readfsqword(0x28u);
  }
}

