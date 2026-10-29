__int64 __fastcall sub_2BAFB0(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v10; // [rsp-8h] [rbp-48h]
  __int64 v11; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v12[6]; // [rsp+10h] [rbp-30h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( a3 >= a2[6] )
    goto LABEL_8;
  v4 = 264 * a3;
  v5 = 264 * a3 + a2[5];
  v6 = **(unsigned __int8 (***)(void))v5;
  if ( (char *)v6 == (char *)sub_2A9C80 )
  {
    if ( *(_DWORD *)(v5 + 120) == *(_DWORD *)(v5 + 248) && !(unsigned int)sub_132BE0(v5 + 8, v5 + 136) )
      goto LABEL_8;
  }
  else if ( !v6() )
  {
LABEL_8:
    sub_7CDC0(a1, (const char *)&unk_3F5793);
    return a1;
  }
  switch_dbctx();
  v7 = a2[9];
  v8 = a2[5];
  v11 = v7;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 104) += 2;
    v12[0] = v7;
  }
  else
  {
    v12[0] = 0;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v10 = *(unsigned int *)(v4 + v8 + 120);
  sub_66DF0((__int64 *)a1);
  sub_13B580(v12, v10);
  sub_13B580(&v11, v10);
  return a1;
}

