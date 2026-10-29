__int64 __fastcall sub_41C90(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  char v3; // r14
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v9; // [rsp+8h] [rbp-270h] BYREF
  __int64 v10; // [rsp+10h] [rbp-268h] BYREF
  __int64 v11; // [rsp+1Ch] [rbp-25Ch]
  __int64 v12; // [rsp+24h] [rbp-254h]
  __int64 v13; // [rsp+34h] [rbp-244h]
  __int64 v14; // [rsp+54h] [rbp-224h]
  __int64 v15; // [rsp+5Ch] [rbp-21Ch]
  unsigned __int64 v16; // [rsp+248h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  LODWORD(v10) = 1;
  v2 = *(_QWORD *)(qword_753F8 + 4832);
  v3 = *(_BYTE *)(qword_753F8 + 121);
  v9 = 0;
  if ( (unsigned int)sub_25D90(v2, &v10) )
    return (unsigned int)throw_idc_exception();
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  if ( !v3 )
  {
    sub_26EC0(v2, v13 + 4 * v5 + 4, (__int64)&v9, 4, 1);
    v7 = (unsigned int)v9;
    free_idcv();
    *(_BYTE *)a2 = 2;
    *(_QWORD *)(a2 + 8) = v7;
    return v4;
  }
  if ( v5 == 3 )
  {
    v6 = v14;
    v9 = v14;
    goto LABEL_8;
  }
  if ( v5 > 3 )
  {
    if ( v5 == 4 )
    {
      v6 = v15;
      v9 = v15;
      goto LABEL_8;
    }
    goto LABEL_16;
  }
  if ( v5 == 1 )
  {
    v6 = v11;
    v9 = v11;
    goto LABEL_8;
  }
  if ( v5 != 2 )
  {
LABEL_16:
    sub_26EC0(v2, v13 + 4 * v5 + 4, (__int64)&v9, 8, 1);
    v6 = v9;
    goto LABEL_8;
  }
  v6 = v12;
  v9 = v12;
LABEL_8:
  free_idcv();
  *(_BYTE *)a2 = 9;
  *(_QWORD *)(a2 + 8) = v6;
  return v4;
}

