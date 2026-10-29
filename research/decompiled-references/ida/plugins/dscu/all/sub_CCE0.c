__int64 __fastcall sub_CCE0(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r12
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rdi
  unsigned __int64 v16; // [rsp+8h] [rbp-80h] BYREF
  __int64 v17; // [rsp+10h] [rbp-78h] BYREF
  __int64 v18; // [rsp+18h] [rbp-70h] BYREF
  __int64 v19; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-48h]
  int v23; // [rsp+48h] [rbp-40h]
  __int64 v24; // [rsp+50h] [rbp-38h]
  __int128 v25; // [rsp+58h] [rbp-30h]
  unsigned __int64 v26; // [rsp+68h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  v2 = netnode_altval(*(_QWORD *)(a1 + 104), 3, 65);
  v16 = v2;
  if ( v2 )
  {
    v3 = v2;
  }
  else
  {
    v7 = sub_77E0((__int64)&v16, (__int64)"Provide any address within the desired section");
    if ( !(_BYTE)v7 )
      return v7;
    v11 = *(_QWORD *)(a1 + 104);
    v21[0] = v16;
    netnode_supset(v11, 3, v21, 8, 65);
    v3 = v16;
  }
  v21[0] = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v4 = sub_A390(a1, (__int64)v21, v3);
  v6 = v24;
  v7 = v4;
  if ( (_BYTE)v4 )
  {
    v8 = v21[0];
    if ( v22 == 3 )
    {
      v12 = *(_QWORD *)(a1 + 104);
      v19 = 1;
      netnode_supset(v12, v21[0], &v19, 8, 104);
    }
    else if ( v22 > 3 )
    {
      v5 = v22 - 4;
      if ( (unsigned int)v5 <= 1 )
      {
        v14 = 112;
        v15 = *(_QWORD *)(a1 + 104);
        if ( v22 == 5 )
          v14 = 102;
        v20 = v21[0] + v21[1];
        netnode_supset(v15, v21[0], &v20, 8, v14);
      }
    }
    else
    {
      v8 = v23;
      if ( v22 )
      {
        if ( v22 == 1 )
        {
          v9 = *(_QWORD *)(a1 + 104);
          v17 = 1;
          netnode_supset(v9, v23, &v17, 8, 103);
        }
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 104);
        v18 = 1;
        netnode_supset(v13, v23, &v18, 8, 116);
      }
    }
    v7 = sub_AC60(a1, v8, v5);
  }
  else
  {
    sub_CA10((__int64)"Error: %a is not valid in the cache\n", 0.0);
  }
  if ( v6 )
    qfree(v6);
  return v7;
}

