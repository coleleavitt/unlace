unsigned __int64 __fastcall sub_C4140(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  int v7; // [rsp+1Ch] [rbp-1Ch] BYREF
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  v3 = *(int *)(a1 + 184);
  v9 = __readfsqword(0x28u);
  v6 = a3;
  if ( v3 >= a3 )
  {
    v4 = *a2;
    if ( *(int *)*a2 > 2 )
    {
      v8 = 0;
      v7 = 4096;
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64 *, __int64, int *, _QWORD))(v4 + 80))(a2, 6, &v7, 0);
        v4 = *a2;
        if ( *a2 )
        {
          (*(void (__fastcall **)(__int64 *, __int64, __int64 *))(v4 + 80))(a2, 5, &v6);
          a3 = v6;
          v4 = *a2;
        }
        else
        {
          a3 = v6;
        }
      }
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v4 + 136))(a2, 0, a3, &v8);
      if ( v8 )
        (*(void (__fastcall **)(__int64 *, _QWORD))(*a2 + 144))(a2, 0);
    }
  }
  return __readfsqword(0x28u) ^ v9;
}
