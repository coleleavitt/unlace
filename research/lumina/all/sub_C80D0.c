__int64 __fastcall sub_C80D0(__int64 a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // eax
  unsigned int v6; // r15d
  unsigned __int32 v7; // r8d
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rax
  _BYTE *v11; // r13
  unsigned __int32 v13; // [rsp+Ch] [rbp-5Ch]
  __int64 v14; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v15[9]; // [rsp+20h] [rbp-48h] BYREF

  *a2 = 0;
  v15[1] = __readfsqword(0x28u);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v14);
  if ( !v4 && v14 > 15 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, v15, 4, v14 - 16);
    if ( v5 )
      return v5;
    v6 = _byteswap_ulong(v15[0]);
    if ( a3 <= v6 || v6 > v14 - 16 || !v6 )
      return v4;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, v15, 4, v14 - 12);
    if ( v5 )
      return v5;
    v13 = _byteswap_ulong(v15[0]);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, v15, 8, v14 - 8);
    if ( v5 )
      return v5;
    if ( v15[0] == 0xD763A120F905D5D9LL )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 16LL))(
             a1,
             a2,
             v6,
             v14 - 16 - v6);
      if ( !v4 )
      {
        v7 = v13;
        v8 = 0;
        do
        {
          v9 = (char)a2[v8++];
          v7 -= v9;
        }
        while ( v6 > (unsigned int)v8 );
        if ( v7 )
        {
          v11 = a2;
          v10 = 1;
        }
        else
        {
          v10 = v6 + 1;
          v11 = &a2[v6];
        }
        *v11 = 0;
        a2[v10] = 0;
      }
    }
  }
  return v4;
}
