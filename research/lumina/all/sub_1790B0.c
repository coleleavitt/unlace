unsigned __int64 __fastcall sub_1790B0(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdi
  unsigned int v5; // r13d
  const char *v6; // r14
  __int64 v7; // rax
  const char *v8; // r15
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // r14
  __int64 v12; // r14
  __int64 v13; // r12
  size_t v15; // [rsp+0h] [rbp-88h]
  size_t v16; // [rsp+0h] [rbp-88h]
  size_t n; // [rsp+8h] [rbp-80h]
  int v18; // [rsp+1Ch] [rbp-6Ch] BYREF
  unsigned __int8 v19[8]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v20[2]; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v19[0] = 2;
  v18 = -1;
  memset(v20, 0, 24);
  v3 = sub_18FA20(a1, a2);
  v4 = *(_QWORD *)(a1 + 104);
  v5 = v3;
  if ( !v4 )
  {
    sub_176520((__int64)v19);
    v19[0] = 7;
    memset(v20, 0, 24);
    sub_178DB0(a2, "file", v19, 0);
    sub_176520((__int64)v19);
LABEL_12:
    v19[0] = 7;
    memset(v20, 0, 24);
    goto LABEL_10;
  }
  v6 = (const char *)sub_186F40(v4, *(unsigned int *)(a1 + 112), &v18);
  v7 = *(_QWORD *)(a1 + 104);
  v8 = s1;
  if ( *(_QWORD *)(v7 + 8) )
    v8 = *(const char **)v7;
  sub_176520((__int64)v19);
  if ( v6 )
  {
    v9 = strlen(v6);
    v19[0] = 7;
    memset(v20, 0, 24);
    if ( v9 )
    {
      n = v9;
      v16 = v9 + 1;
      *(_QWORD *)&v20[0] = sub_1987B0(v20, 0, v9 + 1, 1);
      *((_QWORD *)&v20[0] + 1) = v16;
      memmove(*(void **)&v20[0], v6, n);
      *(_BYTE *)(*(_QWORD *)&v20[0] + n) = 0;
    }
  }
  else
  {
    v19[0] = 7;
    memset(v20, 0, 24);
  }
  sub_178DB0(a2, "file", v19, 0);
  sub_176520((__int64)v19);
  if ( !v8 )
    goto LABEL_12;
  v10 = strlen(v8);
  v19[0] = 7;
  memset(v20, 0, 24);
  v11 = v10;
  if ( v10 )
  {
    v15 = v10 + 1;
    *(_QWORD *)&v20[0] = sub_1987B0(v20, 0, v10 + 1, 1);
    *((_QWORD *)&v20[0] + 1) = v15;
    memmove(*(void **)&v20[0], v8, v11);
    *(_BYTE *)(*(_QWORD *)&v20[0] + v11) = 0;
  }
LABEL_10:
  sub_178DB0(a2, "func", v19, 0);
  v12 = v18;
  sub_176520((__int64)v19);
  v19[0] = 2;
  *(_QWORD *)&v20[0] = v12;
  sub_178DB0(a2, "line", v19, 0);
  v13 = *(_QWORD *)(a1 + 112);
  sub_176520((__int64)v19);
  v19[0] = 2;
  *(_QWORD *)&v20[0] = v13;
  sub_178DB0(a2, "pc", v19, 0);
  sub_18FA40(v5);
  sub_176520((__int64)v19);
  return v21 - __readfsqword(0x28u);
}
