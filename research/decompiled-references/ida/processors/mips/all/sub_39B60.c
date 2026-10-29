unsigned __int64 __fastcall sub_39B60(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 *v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // r14
  bool v6; // bl
  int v7; // eax
  const char *v8; // r8
  const char *v9; // rcx
  char sreg_range; // dl
  int v12; // eax
  __int128 v13; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+10h] [rbp-68h]
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 16);
  v17 = __readfsqword(0x28u);
  v3 = (__int64 *)getseg(v2);
  if ( (getinf(44) & 0x200) != 0 )
  {
    if ( v3 )
    {
      v4 = *v3;
      v13 = 0;
      if ( (unsigned __int8)get_sreg_range(&v13, v2, 67) )
      {
        v5 = v14;
        v6 = v4 == v2 && v14 != 0;
        if ( v6 )
        {
          v15 = 0;
          if ( !v2 )
          {
            v7 = *(_DWORD *)(a1 + 260);
            if ( v7 != 1 )
            {
              if ( v7 != 2 )
              {
LABEL_8:
                v8 = "mips16";
LABEL_9:
                v9 = (const char *)&unk_50790;
LABEL_10:
                sub_37E50(a2, 0xFFFF, (__int64)&unk_50760, v9, v8, 0.0);
                return v17 - __readfsqword(0x28u);
              }
LABEL_27:
              v8 = "nanomips";
              goto LABEL_9;
            }
            goto LABEL_29;
          }
LABEL_14:
          sreg_range = get_sreg_range(&v15, v2 - 1, 67);
          v12 = *(_DWORD *)(a1 + 260);
          if ( sreg_range )
          {
            if ( v12 == 1 )
            {
              v8 = "micromips";
              if ( v6 )
                goto LABEL_29;
            }
            else if ( v12 == 2 )
            {
              v8 = "nanomips";
              if ( v6 )
                goto LABEL_27;
            }
            else
            {
              v8 = "mips16";
              if ( v6 )
                goto LABEL_8;
            }
            if ( v16 == v5 )
              return v17 - __readfsqword(0x28u);
            v9 = "no";
            if ( v5 )
              v9 = (const char *)&unk_50790;
            goto LABEL_10;
          }
          if ( v12 != 1 )
          {
            if ( v12 != 2 )
            {
              if ( !v6 )
                return v17 - __readfsqword(0x28u);
              goto LABEL_8;
            }
            if ( !v6 )
              return v17 - __readfsqword(0x28u);
            goto LABEL_27;
          }
          if ( !v6 )
            return v17 - __readfsqword(0x28u);
LABEL_29:
          v8 = "micromips";
          goto LABEL_9;
        }
        if ( (_QWORD)v13 == v2 )
        {
          v15 = 0;
          if ( v2 )
            goto LABEL_14;
        }
      }
    }
  }
  return v17 - __readfsqword(0x28u);
}

