unsigned __int64 __fastcall sub_B160(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  char **v3; // r14
  __int64 segm_by_name; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 i; // r13
  _QWORD *v8; // r12
  char *v11; // [rsp+10h] [rbp-98h]
  __int64 v12; // [rsp+28h] [rbp-80h]
  __int64 v13; // [rsp+30h] [rbp-78h]
  _QWORD v14[2]; // [rsp+50h] [rbp-58h] BYREF
  char v15; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  netnode_check();
  v2 = netnode_altval();
  if ( *(_DWORD *)(a1 + 404) < v2 && v2 < a2 )
  {
    *(_DWORD *)(a1 + 536) |= 2u;
    *(_DWORD *)(a1 + 404) = v2;
    netnode_check();
    netnode_supset();
  }
  else if ( get_name_ea() == -1 && get_name_ea() == -1 || !(unsigned __int8)get_data_value() )
  {
    v3 = off_27B70;
    do
    {
      segm_by_name = get_segm_by_name();
      if ( segm_by_name )
        break;
      ++v3;
    }
    while ( v3 != (char **)algn_27B88 );
    v14[0] = segm_by_name;
    v14[1] = get_segm_by_name();
    v11 = (char *)v14;
    do
    {
      if ( *(_QWORD *)v11 )
      {
        while ( 1 )
        {
          v13 = qvector_reserve();
          *(_QWORD *)v13 = 0;
          *(_QWORD *)(v13 + 24) = 0;
          *(_QWORD *)(v13 + 48) = 0;
          *(_DWORD *)(v13 + 72) = -1;
          *(_OWORD *)(v13 + 8) = 0;
          *(_OWORD *)(v13 + 32) = 0;
          *(_OWORD *)(v13 + 56) = 0;
          sub_56F0((__int64 *)v13, "go1.", 4u);
          v5 = v13;
          v6 = bin_search();
          if ( v13 )
          {
            for ( i = 0; i != 1; ++i )
            {
              v8 = (_QWORD *)(v5 + 80 * i);
              if ( v8[6] )
              {
                v8[7] = 0;
                qfree();
              }
              if ( v8[3] )
              {
                v8[4] = 0;
                qfree();
              }
              if ( *v8 )
              {
                v8[1] = 0;
                qfree();
              }
              v5 = v13;
            }
            qfree();
          }
          if ( v6 == -1 )
            break;
          if ( (unsigned __int8)sub_8D30(a1, v6, a2) )
            return v16 - __readfsqword(0x28u);
        }
      }
      v11 += 8;
    }
    while ( &v15 != v11 );
  }
  else
  {
    sub_8D30(a1, v12, a2);
  }
  return v16 - __readfsqword(0x28u);
}
