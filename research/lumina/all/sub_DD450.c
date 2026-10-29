__int64 __fastcall sub_DD450(__int64 a1, char *a2, unsigned int a3)
{
  char *v3; // r12
  __int64 *v5; // r13
  __int64 *v6; // rbx
  char v7; // al
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r15
  __int64 *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 **v15; // [rsp+0h] [rbp-98h]
  __int64 v16; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v17[15]; // [rsp+20h] [rbp-78h] BYREF

  v17[7] = __readfsqword(0x28u);
  v16 = 0;
  if ( !a2 )
    return 0;
  v3 = a2;
  v5 = nullptr;
  v15 = (__int64 **)&v16;
  do
  {
    v6 = sub_DBF10(a1, 128);
    if ( !v6 )
      break;
    v6[4] = (__int64)sub_DD150(a1, *((_DWORD **)v3 + 4), a3);
    v6[5] = sub_DDB50(a1, *((_QWORD *)v3 + 5), a3);
    v6[6] = sub_DDB30(a1, *((_QWORD *)v3 + 6), a3);
    v6[7] = (__int64)sub_DD150(a1, *((_DWORD **)v3 + 7), a3);
    v6[8] = sub_DDB30(a1, *((_QWORD *)v3 + 8), a3);
    v6[9] = (__int64)sub_DD150(a1, *((_DWORD **)v3 + 9), a3);
    v7 = *v3;
    v6[11] = (__int64)v5;
    v6[10] = 0;
    *(_BYTE *)v6 = v7;
    v8 = sub_DDB30(a1, *((_QWORD *)v3 + 12), a3);
    v6[1] = 0;
    v6[12] = v8;
    LODWORD(v8) = *((_DWORD *)v3 + 1);
    *(__int64 *)((char *)v6 + 20) = -1;
    *((_DWORD *)v6 + 1) = v8 & 0xFFFFFFDF;
    *((_WORD *)v6 + 1) = *((_WORD *)v3 + 1);
    v9 = sub_DD390(a1, *((_DWORD **)v3 + 13));
    v6[14] = 0;
    v6[13] = (__int64)v9;
    v10 = *((_QWORD *)v3 + 15);
    v17[0] = 0;
    if ( v10 )
    {
      v11 = v17;
      do
      {
        v12 = sub_DDD90(a1, 0, v10);
        *v11 = v12;
        if ( !v12 )
          break;
        v10 = *(_QWORD *)(v10 + 64);
        v11 = (__int64 *)(v12 + 64);
      }
      while ( v10 );
      v13 = v17[0];
    }
    else
    {
      v13 = 0;
    }
    v6[15] = v13;
    if ( *((_QWORD *)v3 + 14) && !*(_BYTE *)(a1 + 103) )
    {
      v17[3] = 0;
      v17[0] = 0;
      v17[1] = sub_F8770;
      v17[5] = v6;
      v17[2] = sub_C43D0;
      sub_CDAF0((__int64)v17, v6);
      *((_DWORD *)v6 + 4) = *((_DWORD *)v3 + 4);
      if ( *(_BYTE *)(a1 + 103) )
      {
LABEL_15:
        v6[11] = 0;
        sub_D75C0(a1, v6, 1);
        return v16;
      }
    }
    else
    {
      *((_DWORD *)v6 + 4) = *((_DWORD *)v3 + 4);
      if ( *(_BYTE *)(a1 + 103) )
        goto LABEL_15;
    }
    v5 = v6;
    *v15 = v6;
    v3 = *((char **)v3 + 10);
    v15 = (__int64 **)(v6 + 10);
  }
  while ( v3 );
  return v16;
}
