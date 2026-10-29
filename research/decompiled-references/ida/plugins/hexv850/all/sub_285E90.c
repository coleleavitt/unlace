__int64 __fastcall sub_285E90(__int64 a1, __int64 a2)
{
  __int64 *v3; // r12
  __int64 *v4; // rbp
  __int64 v5; // r13
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // r15d
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rdi
  _QWORD *v18; // r14
  _QWORD *v19; // rax
  __int64 v21; // r15
  __int64 *v22; // rax
  int tinfo_size; // [rsp+0h] [rbp-48h]
  int v24; // [rsp+Ch] [rbp-3Ch]

  v3 = *(__int64 **)(a2 + 32);
  v4 = *(__int64 **)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 40);
  if ( !(unsigned __int8)v3[6]
    || !*(_BYTE *)(v5 + 48)
    || (v21 = *(_QWORD *)(a1 + 72), (get_tinfo_property() & 0x3F) == 1)
    || (get_tinfo_property() & 0x3F) == 1
    || (unsigned __int8)sub_27FDA0((__int64)v3, 1, *(_DWORD *)(v21 + 644))
    || (unsigned __int8)sub_27FDA0((__int64)v3, 66, 1)
    || (unsigned __int8)sub_27FE70((__int64)v3)
    || (unsigned __int8)sub_27FDA0(v5, 1, *(_DWORD *)(v21 + 644))
    || (unsigned __int8)sub_27FDA0(v5, 66, 1)
    || (v14 = sub_27FE70(v5), (_BYTE)v14)
    || (tinfo_size = get_tinfo_size(), v24 = get_tinfo_size(), !sub_117EC0(tinfo_size))
    && !(unsigned __int8)compare_tinfo()
    || !sub_117EC0(v24) && !(unsigned __int8)compare_tinfo() )
  {
    sub_24F9E0(a2);
    *(_DWORD *)(a2 + 8) = 66;
    v6 = sub_23BF70();
    *(_QWORD *)(a2 + 24) = v6;
    v7 = sub_23C000((__int64)v6, *v4);
    if ( sub_23C4D0(*(_QWORD *)(a1 + 72), (__int64)v4, v8, v9, v10) )
    {
      v4 = sub_23F0A0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (__int64)v4, v11, v12, v13);
      v22 = v3;
      v3 = (__int64 *)v5;
      v5 = (__int64)v22;
    }
    v14 = 1;
    v15 = sub_281570((__int64)v7, (__int64)v4);
    v16 = sub_23BF70();
    v17 = *(_QWORD *)(v15 + 64);
    *(_QWORD *)(v15 + 72) = v16;
    v18 = sub_23C000(v17, *v3);
    v19 = sub_23C000(*(_QWORD *)(v15 + 72), *(_QWORD *)v5);
    *((_DWORD *)v18 + 2) = 72;
    *((_DWORD *)v19 + 2) = 72;
    v18[3] = v3;
    v19[3] = v5;
    sub_27E740(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
  }
  return v14;
}

