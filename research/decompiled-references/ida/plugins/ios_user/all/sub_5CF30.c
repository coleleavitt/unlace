__int64 __fastcall sub_5CF30(__int64 a1, char *a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  size_t v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+4h] [rbp-5Ch] BYREF
  char *v11; // [rsp+8h] [rbp-58h] BYREF
  __int128 v12; // [rsp+10h] [rbp-50h]
  unsigned __int64 v13; // [rsp+20h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v12 = 0;
  v11 = (char *)qvector_reserve();
  *(_QWORD *)&v12 = 12;
  strcpy(v11, "vFile:open:");
  v6 = strlen(a2);
  sub_58A80((__int64 *)&v11, a2, v6);
  sub_20960((__int64 *)&v11);
  if ( (unsigned int)sub_5ABF0(a1, &v11) == 1
    && (v7 = sub_5AB40(a1), *(_BYTE *)(a1 + 16) = 0, v7 == 1)
    && *(_QWORD *)(a1 + 32)
    && **(_BYTE **)(a1 + 24) == 70 )
  {
    sub_59740((_QWORD *)a1, &v10, a5, nullptr);
    v8 = v10;
  }
  else
  {
    v8 = -1;
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v8;
}

