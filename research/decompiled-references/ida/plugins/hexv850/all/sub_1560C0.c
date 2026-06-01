__int64 __fastcall sub_1560C0(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // r14d
  _DWORD *v9; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  char *v16; // rax
  __int128 v17; // rdi
  char *v18; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v19[11]; // [rsp+30h] [rbp-58h] BYREF

  v19[3] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a4 + 72);
  v5 = *(_QWORD *)(v4 + 24);
  if ( *(_BYTE *)v5 == 4
    && (v9 = *(_DWORD **)(v5 + 8), *v9 == 12)
    && v9
    && (v13 = sub_117D20((__int64)v9, &v18, 56)) != 0
    && *(_BYTE *)(v13 + 64) == 8
    && (v14 = *(_QWORD *)(v13 + 72), *(_DWORD *)(v14 + 284) == 7)
    && (v6 = sub_129EC0(a1, a2, a3, (__int64)v18, a3, *(_QWORD *)(v14 + 24), 0), (_BYTE)v6) )
  {
    *(_DWORD *)(v4 + 8) = 2;
    sub_7D880((__int64 *)(v4 + 24), 2u);
    v19[0] = 0xFFFFFFFF00000000LL;
    v19[1] = 0;
    sub_117E50((char *)v19, v18);
    sub_1205C0(*(_QWORD *)(v4 + 24), (unsigned __int8 *)v19);
    copy_tinfo_t();
    copy_tinfo_t();
    *(_DWORD *)(v4 + 284) = 8;
    sub_1188E0(a4 + 32);
    v15 = *(_QWORD *)(a4 + 16);
    if ( v15 && *(_DWORD *)v15 == 4 && sub_120FA0((unsigned __int8 *)(v15 + 32), *(_QWORD *)(v4 + 24), 0) )
    {
      v16 = (char *)sub_155E00((__int64 *)(v4 + 48));
      sub_117E50((char *)(v15 + 64), v16);
      *(_DWORD *)(a4 + 68) = *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4LL);
      copy_tinfo_t();
      *((_QWORD *)&v17 + 1) = v4 + 96;
      *(_QWORD *)&v17 = a2;
      sub_11F2E0(v17, v15 + 32, 1u, 0xFFFF0000);
      sub_149D10((__int64 *)(v4 + 136), (__int64 *)(v4 + 96));
      sub_ED970((__int64)a2, a4, 0);
      sub_1189E0(v15);
    }
    sub_1181E0((__int64)v19);
  }
  else
  {
    return 0;
  }
  return v6;
}

