__int64 __fastcall sub_B230(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rdi
  char v8; // bp
  __int64 debug_name_ea; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  __int128 v20; // [rsp+8h] [rbp-40h]
  __int64 v21; // [rsp+18h] [rbp-30h]
  int v22; // [rsp+20h] [rbp-28h]
  unsigned __int64 v23; // [rsp+28h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 32) )
  {
    sub_EC40(
      (unsigned int)"INTERR: action objc:RunUntilMessageReceived cannot be invoked recursively\n",
      a2,
      a3,
      a4,
      a5,
      a6);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 16);
    v19 = 0;
    v21 = 0;
    v22 = -1;
    v20 = 0;
    v8 = sub_B130(v7, (int)&v19);
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
    if ( v8 )
    {
      debug_name_ea = get_debug_name_ea();
      *(_QWORD *)(a1 + 24) = debug_name_ea;
      if ( debug_name_ea == -1 )
      {
        sub_EC40((unsigned int)"Error: failed to find _objc_msgSend in the target process\n", -1, v10, v11, v12, v13);
      }
      else
      {
        if ( (unsigned __int8)callui(1021) )
        {
          *(_BYTE *)(a1 + 32) = 1;
          return 0;
        }
        sub_EC40((unsigned int)"Error: run_to(%a) failed!\n", *(_QWORD *)(a1 + 24), v14, v15, v16, v17);
      }
    }
    else
    {
      sub_EE20("failed to determine the Objective-C runtime version");
    }
  }
  return 1;
}
