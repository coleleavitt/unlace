unsigned __int64 __fastcall sub_16E780(__int64 a1, void **a2, int a3)
{
  int v4; // r8d
  int v5; // r9d
  int v6; // r9d
  __int64 v7; // rdx
  FILE *v8; // rax
  FILE *v9; // rbx
  const char *v11; // rax
  char v12[1024]; // [rsp+0h] [rbp-2438h] BYREF
  _BYTE v13[4096]; // [rsp+400h] [rbp-2038h] BYREF
  char v14[4104]; // [rsp+1400h] [rbp-1038h] BYREF
  unsigned __int64 v15; // [rsp+2408h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  sub_199140(a1, a2);
  sub_199360(v12, 0x400u, "%Y-%m-%d_%H-%M-%S");
  if ( a3 < 0 )
    sub_19D9D0((unsigned int)v13, 4096, (unsigned int)"exc-%s.raw", (unsigned int)v12, v4, v5);
  else
    sub_19D9D0((unsigned int)v13, 4096, (unsigned int)"interr-%d-%s.raw", a3, (unsigned int)v12, v5);
  v7 = *(_QWORD *)(a1 + 136);
  if ( v7 )
    sub_197540((unsigned int)v14, 4096, v7, (unsigned int)v13, 0, v6, v12[0]);
  else
    sub_1998A0(v14, v13, 4096);
  v8 = (FILE *)sub_1969F0(v14);
  v9 = v8;
  if ( v8 )
  {
    sub_197F70(v8, *a2);
    sub_1980A0(v9);
  }
  else
  {
    v11 = sub_2C700(-1);
    sub_16B870((__int64)"WARNING: Failed to open file: \"%s\": %s\n", v14, v11);
  }
  return v15 - __readfsqword(0x28u);
}
