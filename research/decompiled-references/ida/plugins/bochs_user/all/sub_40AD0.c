__int64 __fastcall sub_40AD0(__int64 a1, unsigned __int16 a2, int a3, unsigned int *a4, char a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  void (__fastcall ***v9)(_QWORD, _QWORD, int *, __int64); // rdi
  void (__fastcall ***v10)(_QWORD, _QWORD, int *, __int64); // rdi
  unsigned int v11; // [rsp+10h] [rbp-40h] BYREF
  unsigned int v12; // [rsp+14h] [rbp-3Ch] BYREF
  int v13; // [rsp+18h] [rbp-38h] BYREF
  int v14; // [rsp+1Ch] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+20h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v13 = 0;
  v14 = 0;
  v6 = sub_407C0((_DWORD *)a1, a2, a3, a4, &v11, (__int64)&v12, &v13, &v14, a5);
  if ( !v6 )
  {
    v7 = v12;
    if ( v11 )
    {
      v9 = *(void (__fastcall ****)(_QWORD, _QWORD, int *, __int64))(a1 + 4184);
      if ( !v9 )
        return v6;
      (**v9)(v9, v11, &v13, 4);
      if ( !v7 )
        return v6;
    }
    else if ( !v12 )
    {
      return v6;
    }
    v10 = *(void (__fastcall ****)(_QWORD, _QWORD, int *, __int64))(a1 + 4184);
    if ( v10 )
      (**v10)(v10, v7, &v14, 4);
  }
  return v6;
}

