__int64 __fastcall sub_454F0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // [rsp+0h] [rbp-2B8h] BYREF
  __int16 v14; // [rsp+Ch] [rbp-2ACh]
  char v15; // [rsp+Eh] [rbp-2AAh]
  __int64 v16; // [rsp+10h] [rbp-2A8h] BYREF
  __int16 v17; // [rsp+1Ch] [rbp-29Ch]
  char v18; // [rsp+1Eh] [rbp-29Ah]
  __int64 v19; // [rsp+20h] [rbp-298h] BYREF
  int v20[33]; // [rsp+28h] [rbp-290h] BYREF
  __int64 v21; // [rsp+ACh] [rbp-20Ch]
  __int64 v22; // [rsp+258h] [rbp-60h]
  unsigned __int64 v23; // [rsp+278h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v17 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 46) = 118;
  v4 = *(_QWORD *)(v3 + 8232);
  *(_WORD *)(a1 + 44) = 27;
  *(_QWORD *)(a1 + 32) = v4;
  v5 = *(_QWORD *)(a1 + 5496);
  v6 = *(_QWORD *)(a1 + 4832);
  v18 = 112;
  v16 = 31746;
  v13 = v5;
  v14 = 8;
  v15 = 118;
  if ( (unsigned int)sub_26A90(v6, (__int64)&v16)
    || (unsigned int)sub_26A90(*(_QWORD *)(a1 + 4832), (__int64)&v13)
    || *(_QWORD *)(a1 + 32) && (unsigned int)sub_26A90(*(_QWORD *)(a1 + 4832), a1 + 32) )
  {
    sub_45250(a1);
    return 4;
  }
  else
  {
    if ( (unsigned int)sub_25D80(*(_QWORD *)(a1 + 4832)) )
    {
      v7 = 24;
      sub_45250(a1);
      return v7;
    }
    v9 = *(_QWORD *)(a1 + 4832);
    LODWORD(v19) = 0;
    v10 = sub_27640(v9, &v19);
    if ( !v10 )
      goto LABEL_22;
    if ( v10 != 12 )
      goto LABEL_13;
    v11 = sub_27640(*(_QWORD *)(a1 + 4832), &v19);
    v7 = v11;
    if ( v11 )
    {
      if ( v11 != 12 )
        goto LABEL_13;
    }
    else
    {
LABEL_22:
      v7 = 0;
    }
    if ( (_DWORD)v19 != 2 )
    {
LABEL_13:
      v7 = 6;
      sub_45250(a1);
      return v7;
    }
    v12 = *(_QWORD *)(a1 + 4824);
    v20[0] = 1;
    if ( !(unsigned int)sub_26100(v12, v20) )
    {
      if ( v21 == v16 )
      {
        sub_45250(a1);
        return 7;
      }
      if ( v21 == v13 )
      {
        sub_26B80(*(_QWORD *)(a1 + 4832), (__int64)&v16);
        sub_26B80(*(_QWORD *)(a1 + 4832), (__int64)&v13);
        *a2 = *(_QWORD *)v20;
        a2[70] = v22;
        qmemcpy(
          (void *)((unsigned __int64)(a2 + 1) & 0xFFFFFFFFFFFFFFF8LL),
          (const void *)((char *)v20 - ((char *)a2 - ((unsigned __int64)(a2 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
          8LL * (((unsigned int)a2 - (((_DWORD)a2 + 8) & 0xFFFFFFF8) + 568) >> 3));
        return v7;
      }
    }
    sub_45250(a1);
    return 1;
  }
}

