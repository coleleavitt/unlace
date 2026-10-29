__int64 __fastcall sub_6F820(__int64 *a1, unsigned int *a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  unsigned int v8; // r11d
  _DWORD *v9; // rax
  struct _Unwind_Exception *v11; // rbx
  unsigned __int16 v12; // [rsp+Ah] [rbp-4Eh] BYREF
  unsigned int v13; // [rsp+Ch] [rbp-4Ch] BYREF
  void *v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v14[1] = (void *)__readfsqword(0x28u);
  if ( a3 > 0xFFF )
  {
    if ( !a4 )
    {
      LOBYTE(v6) = sub_640C0((__int64)a1, (__int64)a2, a3);
      v7 = v6;
      if ( (_BYTE)v6 )
        return v7;
    }
    sub_67120(v14, (__int64)a1, a3, &v12);
    if ( !v14[0] )
      return 0;
    v13 = -1;
    v7 = sub_6F9D0(a1, &v13, a3, (__int64 **)v14, v12, a4);
    if ( !(_BYTE)v7 )
    {
LABEL_12:
      if ( v14[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v14[0] + 8LL))(v14[0]);
      return v7;
    }
    v8 = v13;
    if ( v13 >= (unsigned __int64)((a1[1] - *a1) >> 3) )
    {
      if ( under_debugger )
        goto LABEL_21;
      interr();
    }
    else
    {
      if ( a4 )
        goto LABEL_10;
      v9 = sub_5F700(a1 + 21, a3);
      if ( v9 )
      {
        v9[4] = v8;
LABEL_10:
        if ( a2 )
          *a2 = v8;
        goto LABEL_12;
      }
    }
    if ( !under_debugger )
    {
      v11 = (struct _Unwind_Exception *)interr();
      sub_55E50(v14);
      _Unwind_Resume(v11);
    }
LABEL_21:
    BUG();
  }
  return sub_6F3C0(a1, a2, a3, a4);
}

