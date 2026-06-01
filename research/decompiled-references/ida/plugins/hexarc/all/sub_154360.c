__int64 __fastcall sub_154360(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // r13d
  _DWORD *v9; // rdi
  char *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  char *v18; // rax
  __int128 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v22[9]; // [rsp+20h] [rbp-48h] BYREF

  v22[1] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a4 + 72);
  v5 = *(_QWORD *)(v4 + 24);
  if ( *(_BYTE *)(v5 + 160) == 4
    && (v9 = *(_DWORD **)(v5 + 168), *v9 == 12)
    && v9
    && (v13 = (char *)sub_1161E0((__int64)v9, &v21)) != nullptr
    && (unsigned __int8)sub_1196C0(v13, v22, 1u)
    && v22[0] == 1
    && *(_BYTE *)v21 == 4
    && (v14 = *(_QWORD *)(v21 + 8), *(_DWORD *)v14 == 56)
    && v14
    && *(_BYTE *)(v14 + 64) == 8
    && (v15 = *(_QWORD *)(v14 + 72), *(_DWORD *)(v15 + 284) == 7)
    && (v6 = sub_1283C0(a1, a2, a3, *(_QWORD *)(v4 + 24) + 80LL, a3, *(_QWORD *)(v15 + 24), 0), (_BYTE)v6) )
  {
    v16 = *(_QWORD *)(v4 + 24);
    if ( *(_DWORD *)(v16 + 216) == 1 )
    {
      v20 = *(_QWORD *)(v16 + 224) + *(int *)(v4 + 12);
      if ( *(int *)(v4 + 16) > v20 )
        *(_DWORD *)(v4 + 16) = v20;
    }
    *(_DWORD *)(v4 + 8) = 2;
    sub_7BD80((__int64 *)(v4 + 24), 2u);
    copy_tinfo_t();
    copy_tinfo_t();
    *(_DWORD *)(v4 + 284) = 6;
    sub_116DE0(a4 + 32);
    v17 = *(_QWORD *)(a4 + 16);
    if ( v17 && *(_DWORD *)v17 == 4 && sub_11F4A0((unsigned __int8 *)(v17 + 32), *(_QWORD *)(v4 + 24), 0) )
    {
      v18 = (char *)sub_154300((__int64 *)(v4 + 48));
      sub_116350((char *)(v17 + 64), v18);
      *(_DWORD *)(a4 + 68) = *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4LL);
      copy_tinfo_t();
      *((_QWORD *)&v19 + 1) = v4 + 96;
      *(_QWORD *)&v19 = a2;
      sub_11D7E0(v19, v17 + 32, 1u, 0xFFFF0000);
      sub_148210((__int64 *)(v4 + 136), (__int64 *)(v4 + 96));
      sub_EBE70((__int64)a2, a4, 0);
      sub_116EE0(v17);
    }
  }
  else
  {
    return 0;
  }
  return v6;
}

