__int64 __fastcall sub_FC000(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // r8
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v8; // rbp
  unsigned int v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 *v15; // rax
  __int64 v16; // [rsp+8h] [rbp-58h] BYREF
  __int128 v17; // [rsp+10h] [rbp-50h]
  unsigned __int64 v18; // [rsp+20h] [rbp-40h]

  v3 = a1 + 26;
  v4 = a3 - 1;
  v5 = a1[187];
  v6 = a1[180];
  v18 = __readfsqword(0x28u);
  v16 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL) & (a2 + v6);
  v17 = 0;
  if ( !__CFADD__(v8, a3 - 1) )
  {
    v14 = qvector_reserve();
    v3 = a1 + 26;
    v16 = v14;
    v15 = (unsigned __int64 *)(16 * v17 + v14);
    *v15 = v8;
    v15[1] = a3;
    *(_QWORD *)&v17 = v17 + 1;
  }
  v9 = sub_310BC0(v3, &v16);
  v10 = v9;
  if ( (_BYTE)v9 )
  {
    v11 = a1[76];
    if ( a3 != 0 && v11 != 0 )
    {
      v13 = a1[75];
      LOBYTE(v9) = a3 != 0 && v11 != 0;
      v10 = v9;
      if ( v13 + v11 - 1 >= a2 )
        LOBYTE(v10) = a2 + v4 < v13;
    }
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v10;
}

