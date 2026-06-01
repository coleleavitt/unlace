unsigned __int64 __fastcall sub_51380(__int64 a1, char **a2, int a3)
{
  int byte; // ebp
  int v6; // r8d
  int v7; // r9d
  char *v8; // rax
  const char *v9; // rdx
  char v10; // cl
  char *v11; // rdx
  char v12; // cl
  bool v13; // dl
  const char *v14; // rdx
  char v15; // cl
  char *v16; // rdx
  char v17; // cl
  _BYTE v19[1023]; // [rsp+0h] [rbp-438h] BYREF
  char v20; // [rsp+3FFh] [rbp-39h] BYREF
  char v21; // [rsp+400h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+408h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  byte = (unsigned __int8)get_byte();
  create_data();
  set_op_type();
  if ( !byte )
    return v22 - __readfsqword(0x28u);
  v6 = 1;
  v7 = 0;
  v8 = v19;
  do
  {
    if ( (byte & v6) != 0 )
    {
      byte &= ~v6;
      if ( v8 == v19 )
      {
        v11 = *a2;
        goto LABEL_14;
      }
      if ( v8 >= &v21 )
        goto LABEL_42;
      v9 = " | ";
      if ( v8 == &v20 )
        goto LABEL_36;
      while ( 1 )
      {
        v10 = *v9++;
        *v8 = v10;
        if ( !v10 )
          break;
        if ( ++v8 == &v20 )
          goto LABEL_36;
      }
      if ( v8 >= &v21 )
        goto LABEL_40;
      v11 = *a2;
      if ( v8 == &v20 )
      {
LABEL_36:
        v20 = 0;
        v8 = &v20;
        v13 = byte != 0;
      }
      else
      {
LABEL_14:
        while ( 1 )
        {
          v12 = *v11++;
          *v8 = v12;
          if ( !v12 )
            break;
          if ( ++v8 == &v20 )
            goto LABEL_36;
        }
        v13 = byte != 0;
      }
    }
    else
    {
      v13 = 1;
    }
    ++v7;
    v6 *= 2;
    ++a2;
  }
  while ( a3 > v7 && v13 );
  if ( !byte )
    goto LABEL_30;
  if ( v8 == v19 )
    goto LABEL_26;
  if ( v8 >= &v21 )
  {
    if ( under_debugger )
      goto LABEL_43;
    do
    {
LABEL_39:
      interr();
LABEL_40:
      ;
    }
    while ( !under_debugger );
LABEL_43:
    BUG();
  }
  v14 = " | ";
  if ( v8 == &v20 )
    goto LABEL_32;
  while ( 1 )
  {
    v15 = *v14++;
    *v8 = v15;
    if ( !v15 )
      break;
    if ( ++v8 == &v20 )
      goto LABEL_32;
  }
  if ( v8 >= &v21 )
  {
LABEL_42:
    if ( under_debugger )
      goto LABEL_43;
    goto LABEL_39;
  }
LABEL_26:
  if ( v8 != &v20 )
  {
    v16 = "?";
    while ( 1 )
    {
      v17 = *v16++;
      *v8 = v17;
      if ( !v17 )
        break;
      if ( ++v8 == &v20 )
        goto LABEL_32;
    }
LABEL_30:
    if ( v8 == v19 )
      return v22 - __readfsqword(0x28u);
    goto LABEL_33;
  }
LABEL_32:
  v20 = 0;
LABEL_33:
  if ( (get_flags_ex() & 0x800) == 0 )
    set_cmt();
  return v22 - __readfsqword(0x28u);
}
