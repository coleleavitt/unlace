__int64 __fastcall sub_55510(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  __int64 v3; // rbx
  _BOOL4 v5; // eax
  _QWORD v6[11]; // [rsp+0h] [rbp-58h] BYREF

  v1 = 0;
  v6[7] = __readfsqword(0x28u);
  v2 = qfopen(a1, "rb");
  if ( v2 )
  {
    v3 = v2;
    if ( qfread(v2, v6, 44) == 44 )
    {
      v5 = v6[1] ^ 0x202B2B432F432074LL | v6[0] ^ 0x666F736F7263694DLL
        || v6[3] ^ 0x53441A0A0DLL | v6[2] ^ 0x30302E372046534DLL;
      LOBYTE(v1) = !v5;
    }
    qfclose(v3);
  }
  return v1;
}

