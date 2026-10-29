__int64 __fastcall sub_2648F0(__int64 a1, unsigned int a2, _QWORD *a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 module_data; // r12
  unsigned int v10; // eax
  __int64 v11; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  int v15; // eax
  int v16; // edx
  unsigned int v17; // edx
  __int64 v18; // rdi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 *v22; // rax
  int v23; // eax
  int v24; // edx
  int v25; // r13d
  unsigned __int64 v26; // rax
  int v27; // r13d
  unsigned int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 v33; // r14
  int v34; // edx
  __int64 v35; // r13
  __int64 v36; // rdx
  bool v37; // zf
  __int64 v38; // rdi
  int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rsi
  unsigned __int8 v43; // [rsp+18h] [rbp-70h]
  unsigned int v44; // [rsp+18h] [rbp-70h]
  unsigned int v45; // [rsp+18h] [rbp-70h]
  unsigned int v46; // [rsp+18h] [rbp-70h]
  char v47; // [rsp+1Ch] [rbp-6Ch]
  __int64 v48; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v49; // [rsp+30h] [rbp-58h] BYREF
  int v50; // [rsp+38h] [rbp-50h]
  unsigned __int64 v51; // [rsp+48h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  while ( 2 )
  {
    v8 = a3[5];
    if ( v8 )
      module_data = *(_QWORD *)(v8 + 216);
    else
      module_data = get_module_data();
    if ( *(_DWORD *)(a1 + 12) != -1 )
      sub_2611A0(a1, module_data, a3);
    if ( *(_DWORD *)(a1 + 8) != 71 )
    {
      if ( (a2 & 0x80000000) != 0 )
      {
LABEL_10:
        v43 = 0;
        goto LABEL_11;
      }
LABEL_8:
      sub_25F440((_QWORD *)a1, (__int64)a3, a2, 1u);
LABEL_9:
      sub_261A60((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a3, a1);
      goto LABEL_10;
    }
    v43 = a4 == 2;
    if ( !a4 )
      v43 = sub_25D5C0(*(_QWORD *)(a1 + 24), module_data);
    v13 = a3[5];
    if ( v13 )
    {
      if ( a1 )
      {
        v14 = *(_QWORD *)a1;
        v15 = *(_DWORD *)(a1 + 8);
      }
      else
      {
        v14 = -1;
        v15 = 0;
      }
      v49 = v14;
      v50 = v15;
      v47 = sub_254220(v13, &v49);
      if ( (get_merge_state() & 3) == 0 && (v47 & 1) != 0 )
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
        sub_25F440((_QWORD *)a1, (__int64)a3, a2, 1u);
      if ( !v43 )
        goto LABEL_9;
    }
LABEL_11:
    v10 = sub_2657E0(a1, module_data, a2, a3);
    v11 = v10;
    if ( !v10 )
    {
      switch ( *(_DWORD *)(a1 + 8) )
      {
        case 'F':
          sub_25EAC0((void **)a1, module_data, 0, a2, byte_406261, a3, 0x45u);
          return v51 - __readfsqword(0x28u);
        case 'G':
          return sub_265AD0(*(_QWORD *)(a1 + 24), a1, a2, a3, v43);
        case 'H':
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_405793);
          v18 = *(_QWORD *)(a1 + 24);
          v19 = (__int64)a3;
          v17 = a2;
          goto LABEL_41;
        case 'I':
          if ( (a2 & 0x80000000) != 0 )
          {
            v40 = 10 - a2;
            a2 = -a2;
            v44 = v40;
          }
          else
          {
            v11 = a2;
            v44 = a2 + 5;
          }
          (*(void (__fastcall **)(_QWORD *, __int64, const char *))*a3)(a3, v11, &byte_419848);
          v20 = sub_263B90(*(_QWORD *)(a1 + 24), module_data, v44, (__int64)a3, 0, 0);
          sub_25EAC0((void **)a1, module_data, v20, 1u, byte_406190, a3, 0x48u);
          sub_2648F0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL), a2 + *(_DWORD *)(module_data + 592), a3, a4);
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL);
          if ( !v21 )
            return v51 - __readfsqword(0x28u);
          if ( *(_DWORD *)(v21 + 8) == 71
            && (v22 = *(__int64 **)(v21 + 24), v22[2] == 1)
            && (v41 = *v22, *(_QWORD *)(v41 + 24) == -4294967223LL) )
          {
            a1 = v41 + 16;
            if ( *(_BYTE *)(module_data + 719) )
              sub_25EAC0((void **)(v41 + 16), module_data, 0, 0, (char *)&unk_405793, a3, 0);
            sub_25F440((_QWORD *)a1, (__int64)a3, a2, 1u);
            sub_261A60((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a3, a1);
            v42 = a2;
            a2 = -a2;
            (*(void (__fastcall **)(_QWORD *, __int64, void *))*a3)(a3, v42, &unk_40622B);
          }
          else
          {
            sub_25EAC0((void **)a1, module_data, 0, a2, (char *)&byte_419838, a3, 0x43u);
            a2 += *(_DWORD *)(module_data + 592);
            a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL);
          }
          continue;
        case 'J':
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_406235);
          v45 = a2 + 6;
          v23 = sub_263B90(*(_QWORD *)(a1 + 24) + 72LL, module_data, a2 + 6, (__int64)a3, 0, 0);
          v24 = *(_DWORD *)(module_data + 600);
          v25 = v23;
          if ( v24 <= v23
            || (unsigned __int8)sub_264160(*(_QWORD *)(a1 + 24), module_data, v24 - v23, a3[5], &v48)
            || (v26 = *(int *)(module_data + 600), v48 + v25 >= v26)
            || (unsigned __int8)sub_264160(
                                  *(_QWORD *)(a1 + 24) + 136LL,
                                  module_data,
                                  (int)v26 - v25 - v48,
                                  a3[5],
                                  nullptr) )
          {
            sub_25EAC0((void **)(*(_QWORD *)(a1 + 24) + 72LL), module_data, v25, 0, byte_406261, a3, 0x45u);
            sub_25F440(*(_QWORD **)(a1 + 24), (__int64)a3, v45, 1u);
            (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, v45, &unk_405793);
            v39 = sub_263B90(*(_QWORD *)(a1 + 24), module_data, v45, (__int64)a3, 0, 0);
            sub_25EAC0(*(void ***)(a1 + 24), module_data, v39, 0, byte_406261, a3, 0x45u);
            sub_25F440((_QWORD *)(*(_QWORD *)(a1 + 24) + 136LL), (__int64)a3, v45, 1u);
            a4 = 2;
            (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, v45, &unk_405793);
            v29 = sub_263B90(*(_QWORD *)(a1 + 24) + 136LL, module_data, v45, (__int64)a3, 0, 0);
          }
          else
          {
            (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, 0, &unk_406244);
            v27 = sub_263B90(*(_QWORD *)(a1 + 24), module_data, v25 + 2, (__int64)a3, 0, 0);
            (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, 0, &unk_406244);
            v28 = v27 + 2;
            a4 = 0;
            v29 = sub_263B90(*(_QWORD *)(a1 + 24) + 136LL, module_data, v28, (__int64)a3, 0, 0);
          }
          sub_25EAC0((void **)a1, module_data, v29, 1u, byte_406190, a3, 0x48u);
          a2 += *(_DWORD *)(module_data + 592);
          a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
          continue;
        case 'K':
          a4 = 0;
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_40624B);
          v30 = sub_263B90(*(_QWORD *)(a1 + 24), module_data, a2 + 8, (__int64)a3, 0, 0);
          sub_25EAC0((void **)a1, module_data, v30, 1u, byte_406190, a3, 0x48u);
          a2 += *(_DWORD *)(module_data + 592);
          a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
          continue;
        case 'L':
          sub_25EAC0((void **)a1, module_data, 0, a2, byte_419831, a3, 0x44u);
          sub_2648F0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL), a2 + *(_DWORD *)(module_data + 592), a3, 0);
          sub_261A60((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a3, a1);
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_40624B);
          v31 = sub_263B90(*(_QWORD *)(a1 + 24), module_data, a2 + 8, (__int64)a3, 0, 0);
          sub_25EAC0((void **)a1, module_data, v31, 1u, byte_40625C, a3, 0x45u);
          return v51 - __readfsqword(0x28u);
        case 'M':
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_406267);
          v32 = sub_263B90(*(_QWORD *)(a1 + 24), module_data, a2 + 9, (__int64)a3, 0, 0);
          sub_25EAC0((void **)a1, module_data, v32, 1u, byte_406190, a3, 0x48u);
          sub_25EAC0((void **)a1, module_data, 0, a2, byte_419868, a3, 0x46u);
          v33 = *(_QWORD *)(a1 + 24);
          v34 = *(_DWORD *)(module_data + 592);
          v35 = *(_QWORD *)(v33 + 112);
          v46 = v34 + a2;
          if ( 56LL * *(_QWORD *)(v33 + 120) )
          {
            v36 = *(_QWORD *)(v33 + 112);
            do
            {
              v37 = v36 == v35;
              v38 = v35;
              v35 += 56;
              sub_2654B0(v38, module_data, a1, v46, a3, *(_BYTE *)(module_data + 719) & !v37);
              v36 = *(_QWORD *)(v33 + 112);
            }
            while ( v35 != v36 + 56LL * *(_QWORD *)(v33 + 120) );
            v34 = *(_DWORD *)(module_data + 592);
          }
          sub_25F440((_QWORD *)a1, (__int64)a3, a2 + 2 * v34, 0);
          sub_25EAC0((void **)a1, module_data, 0, a2, byte_419860, a3, 0x47u);
          return v51 - __readfsqword(0x28u);
        case 'N':
          sub_25EAC0((void **)a1, module_data, 0, a2, byte_40628E, a3, 0x45u);
          return v51 - __readfsqword(0x28u);
        case 'O':
          sub_25EAC0((void **)a1, module_data, 0, a2, byte_40629D, a3, 0x45u);
          return v51 - __readfsqword(0x28u);
        case 'P':
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_406279);
          v16 = a2 + 6;
          if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
            goto LABEL_42;
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, 0, &unk_406221);
          v17 = a2 + 7;
          break;
        case 'Q':
          return sub_2612F0(*(signed int **)(a1 + 24), (void **)a1, a2, a3);
        case 'R':
          return sub_2616A0(*(_QWORD *)(a1 + 24), (void **)a1, a2, a3);
        case 'S':
          return sub_264800(*(_QWORD *)(a1 + 24), (void **)a1, a2, a3);
        case 'T':
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_406284);
          v16 = a2 + 5;
          if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
            goto LABEL_42;
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, 0, &unk_406221);
          v17 = a2 + 6;
          break;
        default:
          return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, const char *))*a3)(a3, a2, "???");
      }
      v18 = *(_QWORD *)(a1 + 24);
      v19 = (__int64)a3;
LABEL_41:
      v16 = sub_263B90(v18, module_data, v17, v19, 0, 0);
LABEL_42:
      sub_25EAC0((void **)a1, module_data, v16, 0, byte_406261, a3, 0x45u);
    }
    return v51 - __readfsqword(0x28u);
  }
}

