__int64 __fastcall sub_36E10(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rax
  __int64 (__fastcall *v3)(__int64, int *); // rax
  int *v4; // rax
  int v5; // eax
  __int64 (__fastcall *v6)(__int64, _QWORD *); // rax
  __int64 v7; // rax
  __int64 **v9; // rbp
  __int64 (__fastcall *v10)(__int64, _QWORD *); // rax
  _QWORD *v11; // rax
  void (__fastcall *v12)(void *); // rax
  int v13; // [rsp+4h] [rbp-34h] BYREF
  _QWORD v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *a2;
  v14[2] = __readfsqword(0x28u);
  v13 = 0;
  v14[0] = 0;
  v3 = (__int64 (__fastcall *)(__int64, int *))v2[23];
  if ( v3 == sub_2DCC0 )
  {
    v4 = (int *)sub_2CEC0(a2[2], 0x100000, 0x400u, 0x4000000);
    if ( v4 )
    {
      v5 = *v4;
      v13 = v5;
      goto LABEL_4;
    }
  }
  else
  {
    v3((__int64)a2, &v13);
  }
  v5 = v13;
LABEL_4:
  if ( v5 == 7 )
  {
    v9 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 320) + 128LL))(
                       *(_QWORD *)(a1 + 320),
                       0,
                       0);
    v14[1] = v9;
    if ( !((unsigned int (__fastcall *)(__int64 **, __int64 **))(*a2)[31])(a2, v9) )
    {
      v10 = (__int64 (__fastcall *)(__int64, _QWORD *))(*v9)[14];
      if ( v10 == sub_2D0F0 )
      {
        v11 = (_QWORD *)sub_2CEC0(v9[2], 0x8000000, 0x8000000u, 0x8000000);
        if ( v11 )
          v14[0] = *v11;
      }
      else
      {
        v10((__int64)v9, v14);
      }
    }
    if ( v9 )
    {
      v12 = (void (__fastcall *)(void *))(*v9)[37];
      if ( v12 == sub_243F0 )
        operator delete(v9, 0x18u);
      else
        v12(v9);
    }
  }
  else
  {
    v6 = (__int64 (__fastcall *)(__int64, _QWORD *))(*a2)[14];
    if ( v6 == sub_2D0F0 )
    {
      v7 = sub_2CEC0(a2[2], 0x8000000, 0x8000000u, 0x8000000);
      if ( v7 )
        return *(_QWORD *)v7;
    }
    else
    {
      v6((__int64)a2, v14);
    }
  }
  return v14[0];
}
